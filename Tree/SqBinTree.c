#include <stdlib.h>

/*
	��������˳��洢�ṹ��
		��ȫ���������ʺ����ִ洢�ṹ��һ������������ɿռ��˷ѡ� 
		n��������ȫ�������Ľ�㸸�ӹ�ϵ���򵥵������кž�����
 		1���Ǹ���㣨��� i > 1���ĸ����������ȡ����i / 2��;
		2����㣨���Ϊ i �������ӽ��������  2i��(��2 i <= n������û������);
		3����㣨���Ϊ i �����Һ��ӽ��������  2i+1������2 i +1<= n������û���Һ��ӣ���
*/
typedef int ElemType;
typedef struct TreeNode *BinTree;
typedef struct TreeNode{
	ElemType Data;
	BinTree Left;
	BinTree Right;	
}TreeNode;
typedef BinTree Position;

BinTree CreateTree(){
/*��ʼ������������1.�Ⱦ�����:��2.��������:��ʼ��һ�ÿյĴ�ͷ���Ķ�����,����ͷ���ĵ�ַ*/
	BinTree tree;
	tree = (BinTree)malloc(sizeof(TreeNode));
	tree->Left = NULL;
	tree->Right = NULL;
	return tree;
}


int IsEmpty(BinTree Bt){
/*�ж϶������Ƿ�Ϊ�գ��Ⱦ�������BinTree�ѳ�ʼ����BtΪ���ڵ㡣�����btΪ���򷵻�0�����򷵻�1*/ 
	if(Bt->Data	){
		
		
	} 
return 1;
}

/*�������ı���*/ 



int main(){
	return 0;
}