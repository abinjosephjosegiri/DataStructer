#include <stdlib.h>

/*
	二叉树的顺序存储结构：
		完全二叉树最适合这种存储结构。一般二叉树则会造成空间浪费。 
		n个结点的完全二叉树的结点父子关系，简单地由序列号决定：
 		1、非根结点（序号 i > 1）的父结点的序号是取整（i / 2）;
		2、结点（序号为 i ）的左孩子结点的序号是  2i，(若2 i <= n，否则没有左孩子);
		3、结点（序号为 i ）的右孩子结点的序号是  2i+1，（若2 i +1<= n，否则没有右孩子）。
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
/*初始化二叉树函数1.先决条件:无2.函数作用:初始化一棵空的带头结点的二叉树,返回头结点的地址*/
	BinTree tree;
	tree = (BinTree)malloc(sizeof(TreeNode));
	tree->Left = NULL;
	tree->Right = NULL;
	return tree;
}


int IsEmpty(BinTree Bt){
/*判断二叉树是否为空，先决条件：BinTree已初始化，Bt为根节点。结果：bt为空则返回0，否则返回1*/ 
	if(Bt->Data	){
		
		
	} 
return 1;
}

/*二叉树的遍历*/ 



int main(){
	return 0;
}