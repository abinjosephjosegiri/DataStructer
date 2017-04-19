//		线性表(linear List):由同一类型的数据元素构成的有序序列的线性结构。
//		长度:线性表中元素的个数。
//		空表:线性表中没有元素。
//
//		ADT List{
//			数据对象：D={ai|ai∈ELemSet，i=1、2、3、、、、、n,n>=0}
//			数据关系：
//			基本操作：
//				1、List MakeEmpty()：初始化一个新的空线性表L；
//				2、ElementType FindKth( int K, List L )：根据指定的位序K，返回相应元素 ；
//				3、int Find( ElementType X, List L )：已知X，返回线性表L中与X相同的第一个元素的相应位序i；
//						若不存在则返回空；
//				4、void Insert( ElementType X, int i, List L)：指定位序i前插入一个新元素X；
//				5、void Delete( int  i, List L )：删除指定位序i的元素；
//				6、int Length( List L )：返回线性表L的长度n。
//
//		}

/*线性表的顺序存储*/
#include <stdlib.h>
#define MAXSIZE	100

typedef int ElemType;
typedef struct{
	ElemType data[MAXSIZE];
	int Last;//最后一个元素的下标 
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

//查找
int Find(ElemType e, List *PtrL){
	int i = 0;
	while(e != PtrL->data[i] && i<= PtrL->Last){
		i++;
	}
	if(i > PtrL->Last){
		return -1;
	}else return i;
}
//插入操作
void Insert(List *PtrL, int i, ElemType e){
	int p ;
	//检查是否已满
	if(PtrL->Last == MAXSIZE-1){
		printf("表满了");
		return;
	}
	if(i<0 || i>PtrL->Last+2){
		printf("位置不合法");
		return;
	}
	//插入
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















