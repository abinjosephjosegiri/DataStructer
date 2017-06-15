/*将十进制数N 转换为r 进制的数，其转换方法利用辗转相除法*/

#include <stdlib.h>
#include <stdio.h>
#define MAXSIZE	100


typedef int dataType;
typedef struct {
	dataType data[MAXSIZE];
	int top;
}SeqStack;
static SeqStack resultList;


dataType Pop(SeqStack	*S){
	if(S->top != -1){
		return S->data[S->top--];
	}
	puts("栈为空，无法进行出栈操作");
	exit(0); 
}

int StackEmpty(SeqStack	*S){
	return S->top == -1;
}

void conversion(int N, int r){
	resultList.top = -1;
	int quotient = N, module;
	while( quotient	!= 0 ){
		module = quotient % r;
		resultList.data[++resultList.top] = module;
		quotient /= r;
	}
}


int main(){
	int N = 101, i = 0;
	conversion(N, 2);
	while( !StackEmpty(&resultList) ){
		printf("%d", Pop(&resultList) );
	}
		
	
	return 0;
}
