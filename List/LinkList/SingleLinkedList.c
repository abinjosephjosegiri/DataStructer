/*
	单链表 
*/
#include <stdlib.h>
#include <stdio.h>
#include <String.h>
#include <conio.h>
/* 单链表类型描述，在建立单链表时，建议使用头结点，头结点使得链表在删除和插入对边界的使用型更容易 */
	
typedef int dataType;
	
typedef struct node{
	dataType data;
	struct node *next;
}ListNode;

typedef ListNode *LinkedList;

LinkedList lkList;//此处的head也是指针 
ListNode *p;


/*尾插法建立单链表，每次插入节点都在链表的尾部进行，节点的顺序和输入顺序保持一致*/
/*头插法每次将新节点都插在头结点后面，导致链表的顺序和原来的顺序是相反的*/ 
LinkedList CreateList(void){
	int i = 1;
	//头结点
	ListNode *head = (ListNode*)malloc(sizeof(ListNode));
	ListNode *p = head, *listnode; 
	head->data = -1;
	head->next = NULL;
	while(i <= 5){
		listnode = (ListNode*)malloc(sizeof(ListNode));
		listnode->data = i++;
		listnode->next = NULL;
		p->next = listnode;
		p = listnode;
	}
	//若不使用头结点则返回head->next; 
	return head;
} 

/*链表长度*/
int length(LinkedList head){
	int i = 0;
	ListNode *p = head->next;
	while(p){
		i++;
		p = p->next;
	}
	return i;
}

//找第i个结点元素 
ListNode* GetNode(LinkedList head,int i){
	if(i < 1){
		puts("查找位置不合法");
		exit(0); 
	}
	int j = 0;
	ListNode *p = head;
	while(p && j != i){
		p = p->next;
		j++;
	}
	if( p == NULL){
		puts("查找位置不合法,超出范围");
		exit(0); 
	} 
	return p; 
}

/*按值查找，正常返回位置指针，没有则返回NULL*/
ListNode* LocateNode(LinkedList head, dataType key){
	ListNode *p = head;
	while( p && key != p->data ){
		p = p->next;
	} 
	if( p == NULL ){
		printf("LocateNode没有改到该元素");
		return NULL; 
	}
	return p;

} 

/*在链表的i位置上插入节点，节点值为x*/
void InsertList(LinkedList head, dataType x, int i){
	if( i < 1 ){
		puts("\n插入位置不合法!\n");
		exit(0);
	} 
	ListNode *p = head, *newNode;
	int j = 0;
	while( p && j < i - 1){//将i位置的前一个元素找到 
		p = p->next;
		j++;
	}
	if( p == NULL){
		puts("\n输入位置不合法，超过了链表的长度\n");
		exit(0); 
	} else{
		newNode = (ListNode*)malloc(sizeof(ListNode));
		newNode->data = x;
		newNode->next = p->next;
		p->next = newNode;
	}
	
}




/*链表的删除操作*/
void deleteList(LinkedList head, int i){
	//删除的合法位置为1到length
	if(i < 1 || i > length(head)){
		puts("\n输入位置不合法！\n"); 
		exit(0);
	}
	int j = 1 ;//计数变量，累计节点的位置
	ListNode *p = head, *theNode;
	//找到i-1个节点位置
	for(j = 1 ; j <= i-1 && p; j++){
		p = p->next;
	} 
	//现在p指向要删除结点的前一个结点
	theNode = p->next;
	p->next = theNode->next;//删除结点，即可 
	free(theNode);
} 

int main(){
	lkList = CreateList();
	deleteList(lkList, 5);
	ListNode *p = lkList->next;
	
	
	while( p ){
		printf("%d ", p->data);
		p = p->next;
	}
	
	
	return 0;
}
