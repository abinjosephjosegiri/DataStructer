/*
	���Ա����ʽ�洢�ṹ 
*/
#include <stdlib.h>
#include <stdio.h>
typedef int ElemType;

typedef struct Node{
	ElemType data;
	struct Node *next;	
}LinkList, Node;

//�󳤶�
int Length(LinkList *PtrL){
	int i = 0;
	LinkList *p = PtrL;
	while( p ){
		i++;
		p = p->next;
	}
	return i;
} 

LinkList *Init(){
	int i = 0;
	//ͷ��� 
	Node *head = (Node *)malloc(sizeof(Node));
	Node *p, *q;
	p = head;
	for(i=1; i<10; i++){
		q = (Node*)malloc(sizeof(Node));
		q->next = NULL;
		q->data = i;
		p->next = q;
		p = q;
	} 
	//����10����� 
	return head;
}

//��������
void PrintList(LinkList *PtrL){
	LinkList *p = PtrL->next;
	while( p ){
		printf("%d\n",p->data);
		p = p->next;
	}
}

//����Ų���
LinkList *FindKth(int K, LinkList *PtrL){
	int i = 0;
	LinkList *p = PtrL;
	while(p && i!=K){
		p = p->next;
		i++;
	}
	if(i < K){
		printf("�����Ȳ���");
		return NULL; 
	}else return p;
} 

//��ֵ����
LinkList *Find(ElemType e, LinkList *PtrL){
	LinkList *p = PtrL->next;
	if(p && p->data!=e ){
		p = p->next;
	}
	if(p->data == e){
		return p;
	}else{
		printf("û�ҵ�"); 
		return NULL;
	}
} 

//����ڵ�
void Insert(ElemType e, int i, LinkList *PtrL){
	LinkList *p;
	int j = 1;
	//�ж�λ���Ƿ�Ϸ�(1=<i<=Length(L)+1)
	if(i<0 || i>Length(PtrL)+1) {
		printf("����λ�ò��Ϸ�");
		return;
	} 
	p = PtrL;
	Node *s = (Node *)malloc(sizeof(Node));
	s->data = e;
	s->next = NULL;
	for(i=1; j<=i-1; j++){
		p = p->next;
	}
	s->next = p->next;
	p->next = s; 
}

//ɾ�����
void Delete(LinkList *PtrL, int i){
	int j = 0;
	LinkList *p = PtrL;
	Node *node;
	//i�Ƿ���1�� Length(PtrL)֮��
	if(i<1 || i>Length(PtrL)){
		printf("ɾ��λ�÷Ƿ�");
		return;
	} 
	for(j=1; j<i-1; j++){
		p = p->next;
	}
	//pΪ��i-1����㣬ɾ����i�����
	node = p->next;
	p->next = p->next->next;
	free(node);
	
} 



int main(){
	LinkList *L = Init();
	PrintList(L);
	Node *node1 = FindKth(1, L);
	Node *node2 = FindKth(2, L);
	Node *node3 = FindKth(3, L);
	printf("1%d\n",node1->data);
	printf("2%d\n",node2->data);
	printf("3%d\n",node3->data);
	return 0;
}
