#include <stdlib.h> 
#include <stdio.h>
#define MaxSize	100
 
/*
	列的链式存储方式
		链表有一个头，头为front，为链表尾为rear，即队列在链表头删除，在链表尾插入
		（所以对的链式存储中，栈顶为链表头，因为链表尾无法做删除操作）
		 
*/ 

typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node *Next;
}QNode; 
typedef struct{
	QNode  *front;//队列的头结点，指向队列的第一个元素 
	QNode  *rear; //队列的尾结点，指向队列最后一个元素 
}LinkQueue;

//删除操作，非空条件下将front->next指向第二个结点，非空条件为front->next != NULL,将删除结点元素值返回，释放删除结点
ElemType DeleteQ(LinkQueue *PtrQ){
	ElemType e;
	QNode *p;
	if(PtrQ->front == NULL){
		printf("队列为空");
		return NULL;
	}
	p = PtrQ->front;
	e = p->data;//在头结点删除 
	if(PtrQ->front == PtrQ->rear){
		//只有一个元素，头指针和尾指针指向同一个结点NULL
		PtrQ->front = PtrQ->rear = NULL; 
	}else
		PtrQ->front = p->Next;
	free(p);
	return e;	
}
	

int main(){
	return 0;
}

