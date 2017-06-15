/*
	顺序表 
	1． 顺序表的定义 
	(1) 顺序存储方法
	　    即把线性表的结点按逻辑次序依次存放在一组地址连续的存储单元里的方法。
	(2) 顺序表（Sequential List）
	　    用顺序存储方法存储的线性表简称为顺序表（Sequential List）。
	
	2． 结点ai 的存储地址
	    　不失一般性，设线性表中所有结点的类型相同，则每个结点所占用存储空间大小亦相同。
			假设表中每个结点占用c个存储单元，其中第一个单元的存储地址则是该结点的存储地址，
			并设表中开始结点a1的存储地址（简称为基地址）是LOC（a1），那么结点ai的存储地址LOC（ai）可通过下式计算：
   			LOC（ai）= LOC（a1）+（i-1）*c   1≤i≤n
	 注意：
	    　在顺序表中，每个结点ai的存储地址是该结点在表中的位置i的线性函数。只要知道基地址和每个结点的大小，
		  就可在相同时间内求出任一结点的存储地址。是一种随机存取结构。
*/

#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
#define MAXSIZE	100

typedef int dataType;

typedef struct{
	dataType data[MAXSIZE];//数据 
	int length;			   //当前表元素个数 
}SeqList;

//顺序表上的基本操作


/*1、表的初始化 */
void InitList(SeqList *L){
	L->length = 0;
} 

/*2、求表长*/
int ListLength(SeqList *L){
	return L->length;
}

/*3、取表中第i个结点*/
dataType GetNode(SeqList *L, int i){
	//输入合法性检查
	if(i >= 0 && i <= L->length){
		return L->data[i-1];
	}
	puts("输入位置不合法");
	exit(0);
} 
/*4、查找值为x的结点*/
int LocateNode(SeqList *L, dataType x){
	int i = 0;
	while( i < L->length ){
		if( L->data[i++] == x ){
			return i;
		}
	}
	return -1;
} 


/*5、插入*/
void InsertList(SeqList	*L, dataType elem, int x){
	int i;
	if( L->length = MAXSIZE ){
		printf("线性表已满");
		exit(0); 
	}
	if( x < 1 || x > L->length +1){
		printf("插入位置不合法");
		exit(0);
	}else if( x >= 1 && x <= L->length + 1 ){
		for( i = length	- 1 ; i >= x - 1 ; i-- ){
			L->data[i] = L->data[i-1];
		}
		L->data[x-1] = elem;
		L->length++;	
	} 
} 
/*删除操作*/
void DeleteList(SeqList	*L, int x){
	int 
	if( x < 1 || x > L->length ){
		printf("删除位置不合法");
		exit(0);
	}
	for( i = n ; i <= L->length - 1 ; i++ ){
		L->data[i-1] = L->data[i];
	}
	L->length--;
} 
 


int main(){
	SeqList *L = (SeqList*)malloc(sizeof(SeqList));
	InitList(L);
	GetNode(L, 4);
	
	return 0;
}

