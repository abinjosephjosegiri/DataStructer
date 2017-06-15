/*
	例2．1 将顺序表(a1，a2，... ，an) 重新排列为以a1为界的两部分：a1 前面的值均比a1 小，
	a1 后面的值都比a1 大(这里假设数据元素的类型具有可比性, 不妨设为整型)，操作前后如图2.5所示。这一操作称为划分。a1 也称为基准。
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
