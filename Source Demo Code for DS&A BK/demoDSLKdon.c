 #include <stdio.h>
 #include <stdlib.h>
 
 
typedef struct Node
{
    int id;
    struct Node * next;
}Node;

Node* createNode(int ID)
{
    Node* p= (Node*)malloc(sizeof(Node));
    p->id=ID;
    p->next=NULL;
    return p;
}

Node* insertNode(Node*h, int ID) //Chen 1 node co id=ID vao danh sach h
{
    if (h==NULL) return createNode(ID);
    Node* p=h;
    while (p!=NULL)
    {
        p=p->next;
    }
    p=createNode(ID);
    return h;
}

Node* insertNodeRecursive(Node*h, int ID)
{
    if (h==NULL) return createNode(ID);
    h->next= insertNodeRecursive(h->next,ID);
    return h;
}

int countNode(Node* h)
{
	int i = 0;
	for ( Node*p = h; p != NULL; p = p -> next )
	{
		i++;
	}
	return i;
}


int countNodeRecursive ( Node* h )
{
	if ( h == NULL )	return 0;
	return 1+ countNodeRecursive(h->next);
}



void printList(Node* h)
{
    for (Node* p=h; p!=NULL; p=p->next) printf("%d\n",p->id);
}

void printListRecursive ( Node* h )
{
	if ( h == NULL ) return;
	printf ("%d\n" , h->id );
	printListRecursive ( h -> next );
}


int main()
{
    Node* head=NULL;
    head=insertNode(head,0);
    head=insertNodeRecursive(head,3);
    head=insertNodeRecursive(head,5);
    head=insertNodeRecursive(head,8);
    head=insertNodeRecursive(head,10);
    head=insertNodeRecursive(head,1);
    head=insertNodeRecursive(head,2);
    printListRecursive(head);
    printf("Hello World\n");
    
    printf (" so node la: %d " , countNodeRecursive ( head ) );
}
