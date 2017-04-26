/*
	���У�����һ������Լ�������Ա�ֻ����һ�˲��룬����һ��ɾ��������Ϊfirst in last out
	ADT{
		�������ƣ�����(Queue)
		���ݶ��󼯣�һ����0������Ԫ�ص��������Ա�
		������������һ������Ϊ������MaxSize�Ķ���Q ? Queue���Ƕ����е���һԪ��item ? ElementType��
			1��Queue CreatQueue( int MaxSize )�����ɳ���ΪMaxSize�Ŀն��С�
			2��int IsFullQ( Queue Q, int MaxSize )��
				�ж϶���Q�Ƿ����������Ƿ���1(TRUE)�����򷵻�0(FALSE)��
			3��void AddQ( Queue Q, ElementType item )��
				�������Ѿ����ˣ�����������Ϣ����������Ԫ��item���뵽����Q��ȥ��
			4��int IsEmptyQ( Queue Q )��
				�ж϶���Q�Ƿ�Ϊ�գ����Ƿ���1(TRUE)�����򷵻�0(FALSE)��
			5��ElementType DeleteQ( Queue Q )��
				������Ϊ����Ϣ�����ض��п���Ϣ�����򽫶�ͷ����Ԫ�شӶ�����ɾ�������ء�
			6�� ElementType FrontQ( Queue Q )������
	}
	�洢��ʽ��
		˳��洢������
		��ʽ�洢��
*/

#include <stdlib.h>
#include <stdio.h>
#define MaxSize	100
/*���е�˳��洢��ʽ*/

typedef int ElemType;
typedef struct Queue
{
    ElemType data[MaxSize];
    int front;	//ͷԪ���±�
    int rear;	//βԪ���±�
}Queue;

//˳�����У���MaxSize��λ�õĶ����У���MaxSize-1��Ԫ�أ� ������ʵ��ѭ��

//��ӣ�rear��1����������δ��
void AddQ(Queue *PtrQ,ElemType e)
{
    if ((PtrQ->rear+1)%MaxSize == PtrQ->front)
    {
        printf("��������");
        return;
    }
    else
    {
        PtrQ->rear = (PtrQ->rear+1)%MaxSize;
        PtrQ->data[PtrQ->rear] = e;
    }
}

//���ӣ����зǿյ������£�front+1������Ԫ��ֵ
ElemType DeleteQ(Queue *PtrQ)
{
    int index;
    if (PtrQ->front == PtrQ->rear) //��ֻ���MaxSize-1��Ԫ�ص�ģ���У� front��rearֻ��һ���������ȣ����ն���
    {
        printf("����Ϊ��");
        return NULL;
    }
    else
    {
        PtrQ->front = (index+1)%MaxSize;
        return PtrQ->data[PtrQ->front];
    }
}



int main(){
	
	return 0;
}



















