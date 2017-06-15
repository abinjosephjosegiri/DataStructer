/*
	顺序存储结构的栈，其内部实现为数组
	栈顶在数组尾部，插入和删除都方便实现。若栈顶在数组头部则插入操作需要操纵整个数组元素，执行繁琐
	因此顺序存储的栈有以下几个元素：
		1、数组。
		2、栈顶指针、或者栈顶下标
		3、栈的最大容量、即数组长度 
*/

#include <stdio.h> 
#define MAXSIZE	100 

typedef int dataType;
typedef struct {
	dataType data[STACKSIZE];//栈容量用STACKSIZE表示 
	int top;
}SeqStack;

/*栈置空*/
void InitStack(SeqStack *s){
	s->top = -1;//空栈 
} 

/*压栈，在栈不满的情况下，将元素压入栈顶，栈顶上移*/
void Push(SeqStack	*S, dataType x){
	if( S->top < MAXSIZE - 1){
		S->top++;
		S->data[S->top] = x;
	}else{
		puts("栈已满，无法进行进栈操作");
	}
}

/*出栈操作，栈非空，弹出栈顶元素，栈顶下移*/
dataType Pop(SeqStack *S){
	if( S->top != -1 ){
		dataType data = S->data[S->top];
		S->top--;
		return data;
	} 
	puts("栈为空栈，无法进行出栈操作");
	exit(0); 
}

int StackEmpty(SeqStack *S){
	return S->top == -1;
}

int StackFull(SeqStack	*S){
	return S->top == MAXSIZE - 1;
}

