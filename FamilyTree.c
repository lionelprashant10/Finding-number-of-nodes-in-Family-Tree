#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

typedef struct node
{
    char data;
    struct node *left;
    struct node *right;
}sqNode;

sqNode *createTree(char key)
{
    sqNode *tnode;
    tnode = (sqNode *)malloc(sizeof(sqNode));
    tnode->data = key;
    tnode->left = NULL;
    tnode->right = NULL;

    return tnode;



}

static count = 0;
int countnodes(sqNode *root)
{
    if(root!=NULL)
    {
        countnodes(root->left);
        count++;
        countnodes(root->right);
    }
    return count;

}


int main()
{
    sqNode *L;
    L = createTree("Agan Pd. Acharya");
    L->left = createTree("Dilli Pd. Acharya");
    L->right = createTree("Kumari Acharya");
    L->left->left = createTree("Prabin Acharya");
    L->left->right = createTree("Prashant Acharya");
    L->right->left = createTree("Pramila Acharya");

    printf("Number of nodes in the given tree is %d", countnodes(L));
}
