/*
	˳��洢�ṹ��ջ�����ڲ�ʵ��Ϊ����
	ջ��������β���������ɾ��������ʵ�֡���ջ��������ͷ������������Ҫ������������Ԫ�أ�ִ�з���
	���˳��洢��ջ�����¼���Ԫ�أ�
		1�����顣
		2��ջ��ָ�롢����ջ���±�
		3��ջ����������������鳤�� 
*/

#include <stdio.h> 
#define MAXSIZE	100 

typedef int dataType;
typedef struct {
	dataType data[STACKSIZE];//ջ������STACKSIZE��ʾ 
	int top;
}SeqStack;

/*ջ�ÿ�*/
void InitStack(SeqStack *s){
	s->top = -1;//��ջ 
} 

/*ѹջ����ջ����������£���Ԫ��ѹ��ջ����ջ������*/
void Push(SeqStack	*S, dataType x){
	if( S->top < MAXSIZE - 1){
		S->top++;
		S->data[S->top] = x;
	}else{
		puts("ջ�������޷����н�ջ����");
	}
}

/*��ջ������ջ�ǿգ�����ջ��Ԫ�أ�ջ������*/
dataType Pop(SeqStack *S){
	if( S->top != -1 ){
		dataType data = S->data[S->top];
		S->top--;
		return data;
	} 
	puts("ջΪ��ջ���޷����г�ջ����");
	exit(0); 
}

int StackEmpty(SeqStack *S){
	return S->top == -1;
}

int StackFull(SeqStack	*S){
	return S->top == MAXSIZE - 1;
}

