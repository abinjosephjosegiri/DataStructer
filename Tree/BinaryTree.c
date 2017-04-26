/*
	二叉树：一个有穷的节点集合。这个集合可以为空。若不为空，则它是由根节点和称为其左子树和右子树的两个互不相交的二叉树组成。
		且二叉树的左右子树位置不能颠倒。
		二叉树有五种形态。
			斜二叉树：
			完美二叉树、满二叉树：
			完全二叉树：编号从上至下，从左往右。 
		
		性质：
			二叉树第i层的最大节点数为2^(i-1)。
			深度为k的二叉树的最大节点总数为：2^k - 1。
		 	二叉树中 n0 = n2 + 1
			 
		操作集：对于所有 BT, BT1, BT2∈BinTree, Item∈ElementType，重要的操作有：
			1、Boolean IsEmpty( BinTree BT )： 若BT为空返回TRUE; 否则返回FALSE；
			2、void Traversal( BinTree BT )：二叉树的遍历，即按某一顺序访问二叉树中的每个结点仅一次；
			3、BinTree CreatBinTree( )：创建一个二叉树。
		
		
		常用的遍历方法有：
			1、中序：void InOrderTraversal( BinTree BT )：左、根、右；
			2、前序：void PreOrderTraversal( BinTree BT )：根、左、右；
			3、后序：void PostOrderTraversal( BinTree BT )：左、右、根 。
			4、层次遍历：void LevelOrderTraversal( BinTree BT )：按层从小到大、从左到右的次序遍历。

		 

*/ 


