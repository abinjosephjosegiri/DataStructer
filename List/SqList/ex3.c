/*
	��2.3 �Ƚ��������Ա�Ĵ�С���������Ա�ıȽ��������з�������A��B���������Ա�����������ʾ��
	���ֱ�Ϊm��n��A���B��ֱ�ΪA ��B �г�ȥ���ͬǰ׺����ӱ�
	����A=(x,y,y,z,x,z)�� B=(x,y,y,z,y,x,x,z)���������ͬǰ׺Ϊ(x,y,y,z) ��
	��A��=��x,z���� B��=��y,x,x,z������A��=B��= �ձ���A=B����A��=�ձ���B��ٿձ�
	�����߾�������A����Ԫ��С��B����Ԫ�أ���A<B������A>B��
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
	//���ֻ��������Ŀsame������Բ���
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