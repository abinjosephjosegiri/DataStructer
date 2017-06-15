/*Given a linked list, determine if it has a cycle in it.*/


#include <stdlib.h>
struct ListNode{
	int val;
	struct ListNode *next;
};

enum boolean{TRUE = 1, FALSE = 0};
typedef enum boolean bool;

bool hasCycle(struct ListNode *head) {
	//我们判断环的标准是在已知的节点中，是否有未知节点指向已知节点 
	bool boolFlag = FALSE; 
	//每循环到下一个结点，都判断是否和前面的节点地址相等 
	int i = 0, j;
	struct ListNode *p = head, *r = head;
	while( r->next && r){
		r = r->next;
		i++;
		j = 0;
		p = head;
		while( j < i - 1 ){
			p = p->next;
			if( r == p){
				boolFlag = TRUE;
				return boolFlag;
			}
			j++;
		} 
	}
	return boolFlag;    
}

main(){
	struct ListNode *head = (struct ListNode*)malloc(sizeof(struct ListNode)), *p = head, *tempNode; 
	int i = 1 ;
	while( i <= 5 ){
		tempNode = (struct ListNode*)malloc(sizeof(struct ListNode));
		tempNode->val = i++;
		tempNode->next = NULL;
		p->next = tempNode;
		p = p->next;
	}
	tempNode = (struct ListNode*)malloc(sizeof(struct ListNode));
	p->next = tempNode;
	tempNode->val = i++;
	tempNode->next = NULL;
	
	p = head->next;
	for(i = 0 ; i < 6; i++){
		printf("%d ", p->val);
		p = p->next;
	}
	
	
	printf("\n%d\n", 	hasCycle(head));

}
