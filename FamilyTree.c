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
    L = createTree("South West Petroleum University");
    L->left = createTree("Computer Science");
    L->right = createTree("Software");
    L->left->left = createTree("Data Science");
    L->left->right = createTree("Neural Networking");
    L->right->left = createTree("Web Development");

    printf("Number of nodes in the given tree is %d", countnodes(L));
}
