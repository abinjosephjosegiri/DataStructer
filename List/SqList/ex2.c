/*��2��2 ��˳���A��B����Ԫ�ؾ�����С������������У���дһ���㷨�����Ǻϲ���һ��˳���C��Ҫ��C��Ԫ��Ҳ�Ǵ�С������������С�*/
#include <stdlib.h>
#define MAXSIZE	10
typedef int dataType;
typedef struct{
	dataType data[MAXSIZE];
	int length;
}SeqList;



void merge(SeqList *a, SeqList *b, SeqList *c){
	int i = 0, j = 0, k = 0;
	while( i < a->length && j < b->length ){
		if( a->data[i] < b->data[i] ){
			c->data[k++] = a->data[i++];
		}else{
			c->data[k++] = b->data[j++];
		}
		c->length++;
	}
	if( i == a->length ){
		memcpy(c->data + k, b->data + j, (b->length - j) * sizeof(dataType));
	}
	if( j == b->length ){
		memcpy(c->data + k, a->data + i, (a->length - i) * sizeof(dataType));
	}
}


int main(){
	SeqList a, b, c;
	int i;
	for( i = 0 ; i < 5 ; i++){
		a.data[i] = i;
		b.data[i] = i + 5;
	}
	a.length = 5;
	b.length = 5;

	merge(&a, &b, &c);
	for( i = 0 ; i < 10 ; i++){
		printf("%d ", c.data[i]);
	}
	return 0;
}


