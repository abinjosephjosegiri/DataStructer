#include <stdlib.h>
#include <stdio.h>

/*
	类型名称: 堆栈（Stack）
	数据对象集：一个有0个或多个元素的有穷线性表。
	操作集：对于一个具体的长度为正整数MaxSize的堆栈S ? Stack，记堆栈中的任一元素item ? ElementType。
	1、Stack CreateStack( int MaxSize )： 生成空堆栈，其最大长度为MaxSize；
	2、int IsFull( Stack S, int MaxSize )：判断堆栈S是否已满。若S中元素个数等于MaxSize时返回1(TRUE)；
		否则返回0(FALSE) ；
	3、void Push( Stack S, ElementType item )：将元素item压入堆栈。若堆栈已满，返回堆栈为满信息；
		否则将数据元素item插入到堆栈S栈顶处；
	4、int IsEmpty ( Stack S )：判断堆栈S是否为空，若是返回1(TRUE)；否则返回0(FALSE)；
	5、ElementType Pop( Stack S )：删除并返回栈顶元素。若堆栈为空，返回堆栈为空信息；
		否则将栈顶数据元素从堆栈中删除并返回。
	6、 ElementType Top(Stack S )：……
*/

#define MaxSize 	100

typedef int ElemType;

typedef struct{
	ElemType data[MaxSize];
	int top;//栈顶元素的下标 
}Stack;

void Push(Stack *PtrS, ElemType item){
	//判断是否满栈
	if(PtrS->top = MaxSize-1){
		printf("栈满了");
		return; 
	}else{
		PtrS->data[++(PtrS->top)] = item;
		return;
	} 
}

ElemType Pop(Stack *PtrS){
	//判断是否空栈
	if(PtrS->top = -1){
		return NULL;
	}else{
		return PtrS->data[(PtrS->top)--];
	}
}




















int main(){
	return 0;
}

