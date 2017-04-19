/*
	队列：具有一定操作约束的线性表，只能在一端插入，在另一端删除，表现为first in last out 
	ADT{
		类型名称：队列(Queue)
		数据对象集：一个有0个或多个元素的有穷线性表。
		操作集：对于一个长度为正整数MaxSize的队列Q ? Queue，记队列中的任一元素item ? ElementType。
			1、Queue CreatQueue( int MaxSize )：生成长度为MaxSize的空队列。
			2、int IsFullQ( Queue Q, int MaxSize )：
				判断队列Q是否已满，若是返回1(TRUE)；否则返回0(FALSE)。
			3、void AddQ( Queue Q, ElementType item )： 
				若队列已经满了，返回已满信息；否则将数据元素item插入到队列Q中去。
			4、int IsEmptyQ( Queue Q )： 
				判断队列Q是否为空，若是返回1(TRUE)；否则返回0(FALSE)。
			5、ElementType DeleteQ( Queue Q )：
				若队列为空信息，返回队列空信息；否则将队头数据元素从队列中删除并返回。
			6、 ElementType FrontQ( Queue Q )：……
	}
	存储方式：
		顺序存储：数组
		链式存储：	 
*/

#include <stdlib.h>
#include <stdio.h> 
#define MaxSize	100
/*队列的顺序存储方式*/

typedef int ElemType;
typedef struct Queue{
	ElemType data[MaxSize];
	int front;	//头元素下标 
	int rear;	//尾元素下标 
}Queue;

//顺环队列，在MaxSize个位置的队列中，放MaxSize-1个元素， 用求余实现循环
 
//入队，rear加1，条件队列未满 
void AddQ(Queue *PtrQ,ElemType e){
	if((PtrQ->rear+1)%MaxSize == PtrQ->front){
		printf("队列满了");
		return; 
	}else{
		PtrQ->rear = (PtrQ->rear+1)%MaxSize;
		PtrQ->data[PtrQ->rear] = e;
	}
} 

//出队，队列非空的条件下，front+1，返回元素值 
ElemType DeleteQ(Queue *PtrQ){
	int index;
	if(PtrQ->front == PtrQ->rear){//在只存放MaxSize-1个元素的模型中， front和rear只在一种情况下相等，即空队列 
		printf("队列为空"); 
		return NULL; 
	}else{
		PtrQ->front = (index+1)%MaxSize;
		return PtrQ->data[PtrQ->front];
	}
} 
























