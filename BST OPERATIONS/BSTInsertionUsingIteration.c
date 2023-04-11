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
struct node *insert(int value, struct node *rootNode)
{
    struct node *currentNode = rootNode;
    struct node *parentNode;
    // Allocating Memory to the New Node
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->value = value;
    newNode->left = NULL;
    newNode->right = NULL;
    if (rootNode == NULL)
    {
        rootNode = newNode;
    }
    else
    {
        while (1)
        {
            if (currentNode == NULL)
            {
                break;
            }
            else if (value < currentNode->value)
            {
                parentNode = currentNode;
                currentNode = currentNode->left;
            }
            else
            {
                parentNode = currentNode;
                currentNode = currentNode->right;
            }
        }
        if (value < parentNode->value)
        {
            parentNode->left = newNode;
        }
        else
        {
            parentNode->right = newNode;
        }
    }
    return rootNode;
}

int main()
{
    struct node *root = NULL;
    root = insert(7, root);
    root = insert(56, root);
    root = insert(24, root);
    root = insert(30, root);
    root = insert(6, root);
    root = insert(11, root);
    root = insert(99, root);
    inorderTraversal(root);
    return 0;
}