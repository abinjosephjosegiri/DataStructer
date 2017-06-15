/*
	��2��1 ��˳���(a1��a2��... ��an) ��������Ϊ��a1Ϊ��������֣�a1 ǰ���ֵ����a1 С��
	a1 �����ֵ����a1 ��(�����������Ԫ�ص����;��пɱ���, ������Ϊ����)������ǰ����ͼ2.5��ʾ����һ������Ϊ���֡�a1 Ҳ��Ϊ��׼��
*/
#include <stdlib.h>
#define MAXSIZE	10
typedef int dataType;
typedef struct {
	dataType data[MAXSIZE];
	int length;
}SeqList;

void part(SeqList *L){
	dataType temp[L->length];
	int i, j = 0, k = L->length-1;
	for( i = 0 ; i < L->length ; i++){
		if( L->data[i] < L->data[0] ){
			temp[j++] = L->data[i];
		}else if(L->data[i] > L->data[0]){
			temp[k--] = L->data[i];
		}
		
	}
	temp[j] = L->data[0];
	for( i = 0 ; i < 10 ; i++){
		printf("%d ", temp[i]);
	}
	memcpy(L->data, temp, L->length * sizeof(dataType));
}


int main(){
	SeqList L = {{5,2,3,4,4,6,7,8,9,0},10};
	part(&L);
	int i = 0;
	while( i < 10){
		printf("%d\n", L.data[i++]);
	}	
	return 0;
}
