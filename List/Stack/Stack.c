#include <stdlib.h>
#include <stdio.h>

/*
	��������: ��ջ��Stack��
	���ݶ��󼯣�һ����0������Ԫ�ص��������Ա�
	������������һ������ĳ���Ϊ������MaxSize�Ķ�ջS ? Stack���Ƕ�ջ�е���һԪ��item ? ElementType��
	1��Stack CreateStack( int MaxSize )�� ���ɿն�ջ������󳤶�ΪMaxSize��
	2��int IsFull( Stack S, int MaxSize )���ж϶�ջS�Ƿ���������S��Ԫ�ظ�������MaxSizeʱ����1(TRUE)��
		���򷵻�0(FALSE) ��
	3��void Push( Stack S, ElementType item )����Ԫ��itemѹ���ջ������ջ���������ض�ջΪ����Ϣ��
		��������Ԫ��item���뵽��ջSջ������
	4��int IsEmpty ( Stack S )���ж϶�ջS�Ƿ�Ϊ�գ����Ƿ���1(TRUE)�����򷵻�0(FALSE)��
	5��ElementType Pop( Stack S )��ɾ��������ջ��Ԫ�ء�����ջΪ�գ����ض�ջΪ����Ϣ��
		����ջ������Ԫ�شӶ�ջ��ɾ�������ء�
	6�� ElementType Top(Stack S )������
*/

#define MaxSize 	100

typedef int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int top;//ջ��Ԫ�ص��±� 
}Stack;

void Push(Stack *PtrS, ElemType item){
	//�ж��Ƿ���ջ
	if(PtrS->top = MaxSize-1){
		printf("ջ����");
		return; 
	}else{
		PtrS->data[++(PtrS->top)] = item;
		return;
	} 
}

ElemType Pop(Stack *PtrS){
	//�ж��Ƿ��ջ
	if(PtrS->top = -1){
		return NULL;
	}else{
		return PtrS->data[(PtrS->top)--];
	}
}




















int main(){
	return 0;
}

