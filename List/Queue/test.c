#include <stdlib.h>
#include <stdio.h>
#define MaxSize	100
 
typedef int ELemType;

//����˳���ṹ��ͷռ��һ�ݿռ䣬�����n-1������ 
typedef struct{
	ElemType data[];
	int front;
	int rear;	
	
}Queue;