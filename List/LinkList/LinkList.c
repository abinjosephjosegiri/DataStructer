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
LinkList *Find(ElemType e, LinkList *PtrL){
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
	int j = 1;
	//判断位置是否合法(1=<i<=Length(L)+1)
	if(i<0 || i>Length(PtrL)+1) {
		printf("插入位置不合法");
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

//删除结点
void Delete(LinkList *PtrL, int i){
	int j = 0;
	LinkList *p = PtrL;
	Node *node;
	//i是否在1到 Length(PtrL)之间
	if(i<1 || i>Length(PtrL)){
		printf("删除位置非法");
		return;
	} 
	for(j=1; j<i-1; j++){
		p = p->next;
	}
	//p为第i-1个结点，删除第i个结点
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
