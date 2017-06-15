/*
	������ 
*/
#include <stdlib.h>
#include <stdio.h>
#include <String.h>
#include <conio.h>
/* �����������������ڽ���������ʱ������ʹ��ͷ��㣬ͷ���ʹ��������ɾ���Ͳ���Ա߽��ʹ���͸����� */
	
typedef int dataType;
	
typedef struct node{
	dataType data;
	struct node *next;
}ListNode;

typedef ListNode *LinkedList;

LinkedList lkList;//�˴���headҲ��ָ�� 
ListNode *p;


/*β�巨����������ÿ�β���ڵ㶼�������β�����У��ڵ��˳�������˳�򱣳�һ��*/
/*ͷ�巨ÿ�ν��½ڵ㶼����ͷ�����棬���������˳���ԭ����˳�����෴��*/ 
LinkedList CreateList(void){
	int i = 1;
	//ͷ���
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
	//����ʹ��ͷ����򷵻�head->next; 
	return head;
} 

/*������*/
int length(LinkedList head){
	int i = 0;
	ListNode *p = head->next;
	while(p){
		i++;
		p = p->next;
	}
	return i;
}

//�ҵ�i�����Ԫ�� 
ListNode* GetNode(LinkedList head,int i){
	if(i < 1){
		puts("����λ�ò��Ϸ�");
		exit(0); 
	}
	int j = 0;
	ListNode *p = head;
	while(p && j != i){
		p = p->next;
		j++;
	}
	if( p == NULL){
		puts("����λ�ò��Ϸ�,������Χ");
		exit(0); 
	} 
	return p; 
}

/*��ֵ���ң���������λ��ָ�룬û���򷵻�NULL*/
ListNode* LocateNode(LinkedList head, dataType key){
	ListNode *p = head;
	while( p && key != p->data ){
		p = p->next;
	} 
	if( p == NULL ){
		printf("LocateNodeû�иĵ���Ԫ��");
		return NULL; 
	}
	return p;

} 

/*�������iλ���ϲ���ڵ㣬�ڵ�ֵΪx*/
void InsertList(LinkedList head, dataType x, int i){
	if( i < 1 ){
		puts("\n����λ�ò��Ϸ�!\n");
		exit(0);
	} 
	ListNode *p = head, *newNode;
	int j = 0;
	while( p && j < i - 1){//��iλ�õ�ǰһ��Ԫ���ҵ� 
		p = p->next;
		j++;
	}
	if( p == NULL){
		puts("\n����λ�ò��Ϸ�������������ĳ���\n");
		exit(0); 
	} else{
		newNode = (ListNode*)malloc(sizeof(ListNode));
		newNode->data = x;
		newNode->next = p->next;
		p->next = newNode;
	}
	
}




/*�����ɾ������*/
void deleteList(LinkedList head, int i){
	//ɾ���ĺϷ�λ��Ϊ1��length
	if(i < 1 || i > length(head)){
		puts("\n����λ�ò��Ϸ���\n"); 
		exit(0);
	}
	int j = 1 ;//�����������ۼƽڵ��λ��
	ListNode *p = head, *theNode;
	//�ҵ�i-1���ڵ�λ��
	for(j = 1 ; j <= i-1 && p; j++){
		p = p->next;
	} 
	//����pָ��Ҫɾ������ǰһ�����
	theNode = p->next;
	p->next = theNode->next;//ɾ����㣬���� 
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
