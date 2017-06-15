/*
	例2.3 比较两个线性表的大小。两个线性表的比较依据下列方法：设A、B是两个线性表，均用向量表示，
	表长分别为m和n。A′和B′分别为A 和B 中除去最大共同前缀后的子表。
	例如A=(x,y,y,z,x,z)， B=(x,y,y,z,y,x,x,z)，两表最大共同前缀为(x,y,y,z) 。
	则A′=（x,z）， B′=（y,x,x,z），若A′=B′= 空表，则A=B；若A′=空表且B′≠空表，
	或两者均不空且A′首元素小于B′首元素，则A<B；否则，A>B。
*/

#define MAXSIZE	10

typedef int dataType;
typedef struct{
	dataType data[MAXSIZE];
	int length;
}SeqList;
typedef enum{TRUE = 1, FALSE = 0} Boolean;


Boolean compare(SeqList	*A, SeqList	*B){
	Boolean flag = FALSE;
	int i = A->length < B->length ? A->length : B->length;
	int j = 0;
	int same[i];
	for( j ; j < i ; j++){
		if( A->data[j] == B->data[j] ){
			same[j] = A->data[j];
		}else{
			break;
		}
	}
	//如果只是满足题目same数组可以不用
	for( i = 0 ; i < j ; i++){
		printf("%d\n", same[i]);
	} 
	if( A->data[j] > B->data[j]){
		flag = TRUE;
	}
	return flag;
}


int main(){
	SeqList a={
		{1,3,3,4,9,8},
		6
	},b={
		{1,2,3,4,7,8},
		6
	};
	printf("%d\n", compare(&a, &b));
	return 0;
}