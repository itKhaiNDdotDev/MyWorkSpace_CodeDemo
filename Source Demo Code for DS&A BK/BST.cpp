#include <iostream>

using namespace std;

typedef struct BNode
{
    int id;
    BNode* leftChild;
    BNode* rightChild;
} BNode;
typedef struct BNode* nodePointer ;

BNode* makeNode(int v)
{
    BNode* p=new BNode;
    p->id= v;
    p->leftChild= NULL;
    p->rightChild= NULL;
}
nodePointer insertNode(nodePointer r, int v)
{
    if (r==NULL) return makeNode(v);
    if (v < r->id) r->leftChild= insertNode(r->leftChild,v);
    else r->rightChild= insertNode(r->rightChild,v);
    return r;
}
nodePointer findNode(nodePointer r, int k)
{
    if (r==NULL) return NULL;
    if (r->id==k) return r;
    if (k<r->id) findNode(r->leftChild, k);
    else findNode(r->rightChild,k);
}
nodePointer findMin(nodePointer r)
{
    if (r==NULL) return NULL;
    if (r->leftChild==NULL) return r;
    else return findMin(r->leftChild);
}
int height(nodePointer r)
{
    if (r==NULL) return 0;
    return 1+ max(height(r->leftChild), height(r->rightChild));
}
void printTree(nodePointer r)
{
    if (r==NULL) return;
    cout<<r->id<<": ";
    if (r->leftChild!=NULL) cout<<"l"<<r->leftChild->id<<" ";
    if (r->rightChild!=NULL) cout<<"r"<<r->rightChild->id<<" ";
    cout<<endl;
    printTree(r->leftChild);
    printTree(r->rightChild);
}
void deleteTree(nodePointer r)
{
    if (r==NULL) return;
    deleteTree(r->leftChild);
    deleteTree(r->rightChild);
    cout<<"delete node "<< r->id <<endl;
    delete r;
}
int main()
{
    BNode* root=NULL;
    root= insertNode(root,12);
    root= insertNode(root,3);
    root= insertNode(root,15);
    root= insertNode(root,20);
    root= insertNode(root,26);
    root= insertNode(root,1);
    root= insertNode(root,7);
    root= insertNode(root,9);
    root= insertNode(root,10);
    root= insertNode(root,11);
    root= insertNode(root,13);
    printTree(root);
    cout<< "Minimum of Tree: "<< findMin(root)->id <<endl;
    cout<< "Height of Tree: "<< height(findNode(root,12)) << endl;
    //cout<< findNode(root,21) <<endl;
    deleteTree(root);
    //printTree(root);
    cout << "Successful !" << endl;
    return 0;
}
