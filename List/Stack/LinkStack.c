

typedef int ElemType;
typedef struct Node{
	ElemType Data;
	LinkStack Node *Next; 
}LinkStack, Node;
 
LinkStack *CreateStack(){
	LinkStack *s = (LinkStack *)malloc(sizeof(LinkStack));
	s->Next = NULL;
	return s;
}

int IsEmpty(LinkStack *s){
	return (s->Next == NULL);
}

void Push(LinkStack *s, ElemType e){
	Node *node = (Node)malloc(sizeof(Node));
	node->Data = e;
	node->Next = s->Next;
	s->Next = node;
}

ElemType Pop(LinkStack *s){
	Node *node;
	ElemType elem;
	if( IsEmpty(s) ){
		printf("Õ»Îª¿Õ");return NULL; 
	}else{
		node = s->Next;
		s->Next = node->Next;
		elem = node->Data;
		free(node);
		return elem;
	}
}




