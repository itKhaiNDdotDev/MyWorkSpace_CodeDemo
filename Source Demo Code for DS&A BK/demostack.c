#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int id;
    struct Node* leftMostChild;
    struct Node* rightSibling;
}Node;

typedef struct Node* nodePointer ;

Node* root;


Node* makeNode(int v)
{
    Node* p= (Node*)malloc(sizeof(Node));
    p->id=v;
    p->leftMostChild=NULL;
    p->rightSibling=NULL;
    return p;
}

Node* find(Node* r, int v)
{
    // Tim kiem node co id bang v, tra ve con tro toi no
    if (r==NULL) return NULL;
    if (r->id==v) return r;
    Node* p=r->leftMostChild;

    while(p!=NULL)
    {
        Node*h =find(p,v);
        if (h!=NULL) return h;
        p=p->rightSibling;
    }
    return NULL;
}


void insertNode(Node* r, int v, int u)
{
    //chen 1 node id=v lam con cua u
    Node* p=find(r,u);
    if (p==NULL) return;
    if(p->leftMostChild == NULL) p->leftMostChild = makeNode(v);
    else
    {
        p=p->leftMostChild;
        while (p->rightSibling!=NULL) p=p->rightSibling;
        p->rightSibling=makeNode(v);
    }

}

void printTree(Node* r)
{
    if (r==NULL) return;
    printf("\n%d:",r->id);
    Node*p=r->leftMostChild;
    while (p!=NULL)
    {
        printf("%3d",p->id);
        p=p->rightSibling;
    }

    Node* q=r->leftMostChild;
    while (q!=NULL)
    {
        printTree(q);
        q=q->rightSibling;
    }
}

int countNode(Node* r)
{
    if (r==NULL) return 0;
    if (r->leftMostChild==NULL) return 1;

    Node* p=r->leftMostChild;
    int cnt=1;
    while (p!=NULL)
    {
        cnt+=countNode(p);
        p=p->rightSibling;
    }
    return cnt;
}

int countLeaves(nodePointer r)
{
    if (r==NULL) return 0;
    nodePointer p=r->leftMostChild;
    int cnt=0;
    while (p!=NULL)
    {
        if (p->leftMostChild==NULL) cnt++;
        else cnt+=countLeaves(p);
        p=p->rightSibling;
    }
    return cnt;
}

int heightNode()
{

}

int height(nodePointer r, int v)
{

}

int depth(nodePointer r)
{

}


int main()
{
    root=makeNode(10);

    insertNode(root,11,10);
    insertNode(root,5,11);
    insertNode(root,4,11);
    insertNode(root,6,4);
    insertNode(root,9,4);

    insertNode(root,1,10);

    insertNode(root,3,10);
    insertNode(root,8,3);
    insertNode(root,2,3);
    insertNode(root,7,3);


    printTree(root);
    printf("\nNumber of Node in Tree: %d", countNode(root));
    printf("\nNumber of Leaves in Tree: %d", countLeaves(root));
}
