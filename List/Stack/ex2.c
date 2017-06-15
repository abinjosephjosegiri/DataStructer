/*
		Stack is one of the most fundamental data structures, which is based on the principle of Last In First Out (LIFO). 
	The basic operations include Push (inserting an element onto the top position) and Pop (deleting the top element). 
	Now you are supposed to implement a stack with an extra operation: PeekMedian -- return the median value of all the 
	elements in the stack. With N elements, the median value is defined to be the (N/2)-th smallest element if N is even, 
	or ((N+1)/2)-th if N is odd.
	
	Input Specification:
	Each input file contains one test case. For each case, the first line contains a positive integer N (<= 105). 
	Then N lines follow, each contains a command in one of the following 3 formats:
	Push key
	Pop
	PeekMedian
	where key is a positive integer no more than 105.
	
	Output Specification:
	For each Push command, insert key into the stack and output nothing. For each Pop or PeekMedian command, 
	print in a line the corresponding returned value. If the command is invalid, print "Invalid" instead.
*/
#include <stdio.h>
#include <stdlib.h>
#define MAXSIZE	100

typedef int dataType;
typedef struct{
	dataType data[MAXSIZE];
	int top;
}SeqStack;

int StackEmpty(SeqStack	*S){
	return S->top == -1;
}

int StackFull(SeqStack	*S){
	return S->top == MAXSIZE - 1; 
}

int Pop(SeqStack *S){
	if( !StackEmpty(S) ){
		return S->data[S->top--];
	}
	puts("Õ»¿ÕÁË");
	exit(0); 
}

int Push(SeqStack *S, dataType	x){
	if( !StackFull(S) ){
		S->data[++S->top] = x;
	}
}

