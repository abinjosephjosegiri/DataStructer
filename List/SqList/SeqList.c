/*
	˳��� 
	1�� ˳���Ķ��� 
	(1) ˳��洢����
	��    �������Ա�Ľ�㰴�߼��������δ����һ���ַ�����Ĵ洢��Ԫ��ķ�����
	(2) ˳���Sequential List��
	��    ��˳��洢�����洢�����Ա���Ϊ˳���Sequential List����
	
	2�� ���ai �Ĵ洢��ַ
	    ����ʧһ���ԣ������Ա������н���������ͬ����ÿ�������ռ�ô洢�ռ��С����ͬ��
			�������ÿ�����ռ��c���洢��Ԫ�����е�һ����Ԫ�Ĵ洢��ַ���Ǹý��Ĵ洢��ַ��
			������п�ʼ���a1�Ĵ洢��ַ�����Ϊ����ַ����LOC��a1������ô���ai�Ĵ洢��ַLOC��ai����ͨ����ʽ���㣺
   			LOC��ai��= LOC��a1��+��i-1��*c   1��i��n
	 ע�⣺
	    ����˳����У�ÿ�����ai�Ĵ洢��ַ�Ǹý���ڱ��е�λ��i�����Ժ�����ֻҪ֪������ַ��ÿ�����Ĵ�С��
		  �Ϳ�����ͬʱ���������һ���Ĵ洢��ַ����һ�������ȡ�ṹ��
*/

#include <stdio.h> 
#include <stdlib.h>
#include <string.h> 
#define MAXSIZE	100

typedef int dataType;

typedef struct{
	dataType data[MAXSIZE];//���� 
	int length;			   //��ǰ��Ԫ�ظ��� 
}SeqList;

//˳����ϵĻ�������


/*1����ĳ�ʼ�� */
void InitList(SeqList *L){
	L->length = 0;
} 

/*2�����*/
int ListLength(SeqList *L){
	return L->length;
}

/*3��ȡ���е�i�����*/
dataType GetNode(SeqList *L, int i){
	//����Ϸ��Լ��
	if(i >= 0 && i <= L->length){
		return L->data[i-1];
	}
	puts("����λ�ò��Ϸ�");
	exit(0);
} 
/*4������ֵΪx�Ľ��*/
int LocateNode(SeqList *L, dataType x){
	int i = 0;
	while( i < L->length ){
		if( L->data[i++] == x ){
			return i;
		}
	}
	return -1;
} 


/*5������*/
void InsertList(SeqList	*L, dataType elem, int x){
	int i;
	if( L->length = MAXSIZE ){
		printf("���Ա�����");
		exit(0); 
	}
	if( x < 1 || x > L->length +1){
		printf("����λ�ò��Ϸ�");
		exit(0);
	}else if( x >= 1 && x <= L->length + 1 ){
		for( i = length	- 1 ; i >= x - 1 ; i-- ){
			L->data[i] = L->data[i-1];
		}
		L->data[x-1] = elem;
		L->length++;	
	} 
} 
/*ɾ������*/
void DeleteList(SeqList	*L, int x){
	int 
	if( x < 1 || x > L->length ){
		printf("ɾ��λ�ò��Ϸ�");
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

