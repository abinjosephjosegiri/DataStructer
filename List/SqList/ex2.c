/*例2．2 有顺序表A和B，其元素均按从小到大的升序排列，编写一个算法将它们合并成一个顺序表C，要求C的元素也是从小到大的升序排列。*/
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


