#include <stdlib.h>
#include <stdio.h>
#define MaxSize	100
 
typedef int ELemType;

//采用顺环结构，头占用一份空间，攻存放n-1份数据 
typedef struct{
	ElemType data[];
	int front;
	int rear;	
	
}Queue;