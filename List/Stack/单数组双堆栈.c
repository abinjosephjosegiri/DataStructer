#include <stdlib.h>
#include <stdio.h>

#define MaxSize	100

typedef int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int top1;
	int top2;
}DoubleStack;

void Push(DoubleStack *PtrS, ElemType e, int Tag){
	/*Tag��Ϊ����ջ�ķ�����־���ֱ�Ϊ1,2*/
	
	//�����ж϶�ջ�Ƿ�����
	if( PtrS->top2 - PtrS->top1 == 1 ){
		printf("��ջ����");return; 
	}else{
		if(Tag == 1){
			PtrS->data[++(PtrS->top1)] = e;
		}else if(Tag == 2){
			PtrS->data[--(PtrS->top2)] = e;
		}else{
			printf("tag����Ƿ�");return; 
		}
	}
}

ELemType Pop(DoubleStack *PtrS, int Tag){
	//����tag�ж��Ƿ��ǿ�ջ
	if(Tag == 1){
		if(PtrS->top1 == -1){
			printf("ջ1�ǿյ�");return NULL; 
		}else{
			return PtrS->data[(PtrS->top1)--];
		}
	}else if(Tag == 2){
		if(PtrS->top2 == MaxSize){
			printf("ջ2�ǿյ�");return NULL; 
		}else{
			return PtrS->data[(PtrS->top2)++];
		}
	} 
}






int main(){
	return 0;
}

