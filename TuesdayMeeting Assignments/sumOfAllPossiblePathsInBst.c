#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct node
{
    int value;
    struct node *left;
    struct node *right;
} node;

int leafElementsArray[100];
int leafElementsArrayIndex = 0;
int sum = 0;

node *insert(int value, node *tnode)
{
    if (tnode == NULL)
    {
        node *newNode = (node *)malloc(sizeof(node));
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

void inorderTraversal(node *tnode)
{

    if (tnode == NULL)
    {
        return;
    }
    if (tnode->left == NULL && tnode->right == NULL)
    {
        leafElementsArray[leafElementsArrayIndex] = tnode->value;
        leafElementsArrayIndex++;
    }
    inorderTraversal(tnode->left);
    printf("%d ", tnode->value);
    inorderTraversal(tnode->right);
}
void search(node *root, int key)
{

    if (root == NULL || root->value == key)
    {
        sum = sum + root->value;
    }

    else if (root->value < key)
    {
        sum = sum + root->value;
        search(root->right, key);
    }
    else
    {
        sum = sum + root->value;
        search(root->left, key);
    }
}
void sumOfAllPossiblePaths(node *root)
{
    int index;
    for (index = 0; index < leafElementsArrayIndex; index++)
    {
        search(root, leafElementsArray[index]);
    }
}
int main()
{
    int index, num, value;
    node *root = NULL;
    printf("Enter the no. of Elements to be entered in the Tree: ");
    scanf("%d", &num);
    printf("Enter All The Elements: ");
    for (index = 0; index < num; index++)
    {
        scanf("%d", &value);
        root = insert(value, root);
    }
    inorderTraversal(root);
    sumOfAllPossiblePaths(root);
    printf("\nThe Sum of all Possible Paths is: ");
    printf("%d", sum);
    return 0;
}