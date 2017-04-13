/*
	线性表的链式存储结构 
*/
#include <stdlib.h>
#include <stdio.h>
typedef int ElemType;

typedef struct Node{
	ElemType data;
	struct Node *next;	
}LinkList, Node;

//求长度
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
	//头结点 
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
	//生成10个结点 
	return head;
}

//遍历链表
void PrintList(LinkList *PtrL){
	LinkList *p = PtrL->next;
	while( p ){
		printf("%d\n",p->data);
		p = p->next;
	}
}

//按序号查找
LinkList *FindKth(int K, LinkList *PtrL){
	int i = 0;
	LinkList *p = PtrL;
	while(p && i!=K){
		p = p->next;
		i++;
	}
	if(i < K){
		printf("链表长度不够");
		return NULL; 
	}else return p;
} 

//按值查找
LinkList *Find(ELemType e, LinkList *PtrL){
	LinkList *p = PtrL->next;
	if(p && p->data!=e ){
		p = p->next;
	}
	if(p->data == e){
		return p;
	}else{
		printf("没找到"); 
		return NULL;
	}
} 

//插入节点
void Insert(ElemType e, int i, LinkList *PtrL){
	LinkList *p;
	int i = 1;
	//判断位置是否合法(1=<i<=Length(L)+1)
	if(i<0 || i>Length(PtrL)+1) {
		printf("插入位置不合法");
		return;
	} 
	p = PtrL;
	Node *s = (Node *)malloc(sizeof(Node));
	s->data = e;
	s->next = NULL;
	for(i=1; i<=i-1; i++){
		p = p->next;
	}
	s->next = p->next;
	p->next = s; 
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
