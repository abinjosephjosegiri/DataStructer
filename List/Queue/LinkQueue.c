#include <stdlib.h> 
#include <stdio.h>
#define MaxSize	100
 
/*
	�е���ʽ�洢��ʽ
		������һ��ͷ��ͷΪfront��Ϊ����βΪrear��������������ͷɾ����������β����
		�����ԶԵ���ʽ�洢�У�ջ��Ϊ����ͷ����Ϊ����β�޷���ɾ��������
		 
*/ 

typedef int ElemType;
typedef struct Node{
	ElemType data;
	struct Node *Next;
}QNode; 
typedef struct{
	QNode  *front;//���е�ͷ��㣬ָ����еĵ�һ��Ԫ�� 
	QNode  *rear; //���е�β��㣬ָ��������һ��Ԫ�� 
}LinkQueue;

//ɾ���������ǿ������½�front->nextָ��ڶ�����㣬�ǿ�����Ϊfront->next != NULL,��ɾ�����Ԫ��ֵ���أ��ͷ�ɾ�����
ElemType DeleteQ(LinkQueue *PtrQ){
	ElemType e;
	QNode *p;
	if(PtrQ->front == NULL){
		printf("����Ϊ��");
		return NULL;
	}
	p = PtrQ->front;
	e = p->data;//��ͷ���ɾ�� 
	if(PtrQ->front == PtrQ->rear){
		//ֻ��һ��Ԫ�أ�ͷָ���βָ��ָ��ͬһ�����NULL
		PtrQ->front = PtrQ->rear = NULL; 
	}else
		PtrQ->front = p->Next;
	free(p);
	return e;	
}
	

int main(){
	return 0;
}

