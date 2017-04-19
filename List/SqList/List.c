//		���Ա�(linear List):��ͬһ���͵�����Ԫ�ع��ɵ��������е����Խṹ��
//		����:���Ա���Ԫ�صĸ�����
//		�ձ�:���Ա���û��Ԫ�ء�
//
//		ADT List{
//			���ݶ���D={ai|ai��ELemSet��i=1��2��3����������n,n>=0}
//			���ݹ�ϵ��
//			����������
//				1��List MakeEmpty()����ʼ��һ���µĿ����Ա�L��
//				2��ElementType FindKth( int K, List L )������ָ����λ��K��������ӦԪ�� ��
//				3��int Find( ElementType X, List L )����֪X���������Ա�L����X��ͬ�ĵ�һ��Ԫ�ص���Ӧλ��i��
//						���������򷵻ؿգ�
//				4��void Insert( ElementType X, int i, List L)��ָ��λ��iǰ����һ����Ԫ��X��
//				5��void Delete( int  i, List L )��ɾ��ָ��λ��i��Ԫ�أ�
//				6��int Length( List L )���������Ա�L�ĳ���n��
//
//		}

/*���Ա��˳��洢*/
#include <stdlib.h>
#define MAXSIZE	100

typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];
	int Last;//���һ��Ԫ�ص��±� 
}List;
List L, *PtrL;


List *MakeEmpty(){
	List *PtrL;
	PtrL = (List *)malloc(sizeof(List));
	if( !PtrL ){
		exit(0);
	}
	PtrL->Last = -1;
	return PtrL;
}

//����
int Find(ElemType e, List *PtrL){
	int i = 0;
	while(e != PtrL->data[i] && i<= PtrL->Last){
		i++;
	}
	if(i > PtrL->Last){
		return -1;
	}else return i;
}
//�������
void Insert(List *PtrL, int i, ElemType e){
	int p ;
	//����Ƿ�����
	if(PtrL->Last == MAXSIZE-1){
		printf("������");
		return;
	}
	if(i<0 || i>PtrL->Last+2){
		printf("λ�ò��Ϸ�");
		return;
	}
	//����
	for(p= PtrL->Last ; p>=i-1 ; p--){
		PtrL->data[p+1] = PtrL->data[p];
	}
	PtrL->data[i-1] = e;
	PtrL->Last++;
	return;
}




int main(){
	return 0;
}















