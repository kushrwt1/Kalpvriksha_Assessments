#include <stdio.h>
#include <stdlib.h>

struct node
{
    int value;
    struct node *left;
    struct node *right;
};
void inorderTraversal(struct node *rootNode)
{
    if (rootNode == NULL)
    {
        return;
    }
    inorderTraversal(rootNode->left);
    printf("%d ", rootNode->value);
    inorderTraversal(rootNode->right);
}
struct node *insert(int value, struct node *tnode)
{
    if (tnode == NULL)
    {
        struct node *newNode = (struct node *)malloc(sizeof(struct node));
        newNode->value = value;
        newNode->left = NULL;
        newNode->right = NULL;
        tnode = newNode;
    }
    else
    {
        if (value < tnode->value)
        {
            tnode->left = insert(value, tnode->left);
        }
        else
        {
            tnode->right = insert(value, tnode->right);
        }
    }
    return tnode;
}
int main()
{
    struct node *root = NULL;
    root = insert(2, root);
    root = insert(1, root);
    root = insert(7, root);
    root = insert(3, root);
    root = insert(6, root);
    root = insert(11, root);
    root = insert(10, root);
    inorderTraversal(root);
    return 0;
}