/*Given a linked list, determine if it has a cycle in it.*/


#include <stdlib.h>
struct ListNode{
	int val;
	struct ListNode *next;
};

enum boolean{TRUE = 1, FALSE = 0};
typedef enum boolean bool;

bool hasCycle(struct ListNode *head) {
	//�����жϻ��ı�׼������֪�Ľڵ��У��Ƿ���δ֪�ڵ�ָ����֪�ڵ� 
	bool boolFlag = FALSE; 
	//ÿѭ������һ����㣬���ж��Ƿ��ǰ��Ľڵ��ַ��� 
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
