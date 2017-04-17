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
	/*Tag作为两个栈的分区标志，分别为1,2*/
	
	//首先判断堆栈是否已满
	if( PtrS->top2 - PtrS->top1 == 1 ){
		printf("堆栈已满");return; 
	}else{
		if(Tag == 1){
			PtrS->data[++(PtrS->top1)] = e;
		}else if(Tag == 2){
			PtrS->data[--(PtrS->top2)] = e;
		}else{
			printf("tag输入非法");return; 
		}
	}
}

ELemType Pop(DoubleStack *PtrS, int Tag){
	//根据tag判断是否是空栈
	if(Tag == 1){
		if(PtrS->top1 == -1){
			printf("栈1是空的");return NULL; 
		}else{
			return PtrS->data[(PtrS->top1)--];
		}
	}else if(Tag == 2){
		if(PtrS->top2 == MaxSize){
			printf("栈2是空的");return NULL; 
		}else{
			return PtrS->data[(PtrS->top2)++];
		}
	} 
}






int main(){
	return 0;
}

