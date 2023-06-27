#include <stdio.h>
#include <stdlib.h>

struct binaryTreeNode
{
  char data[100];
  struct node *left, *right;
};

struct binaryTreeNode* create()
{
    char newData[100];
    struct binaryTreeNode *newNode= (struct binaryTreeNode*)malloc(sizeof(struct binaryTreeNode));
    scanf("%s",&newNode->data);
    newNode->left=NULL;
    newNode->right=NULL;
    return newNode;
}

// Function to find the path from the root node to a leaf node
  char** findPathFromRootToLeaf(struct binaryTreeNode* root, struct binaryTreeNode* leafNode, char **path, int pathLength) {
    // Base case: if the current node is NULL, return 0
    if (root == NULL) {
        return 0;
    }

    // Add the current node to the path
    for(int i=0;root->data[i]!='\0';i++)
    {
     path[pathLength++][i] = root->data[i];     
    }
    
    // Base case: if the current node is the leaf node, print the path
    if (root == leafNode) {
        
        return path;
    }

    // Recursively search in the left and right subtrees
    int foundPath = findPathFromRootToLeaf(root->left, leafNode, path, pathLength) ||
                    findPathFromRootToLeaf(root->right, leafNode, path, pathLength);

}



struct binaryTreeNode *root = NULL;
int main()
{
    while(1)
    {
        // City Name
        printf("Enter the City Value: ");
        root= create();
        // Suburb Name
        printf("Enter the 1st Suburb Name:");
        root->left= create();
        printf("Enter the 2nd Suburb Name:");
        root->right= create();
        
        // Town Name
        printf("Enter the 1st Town Name:");
        root->left->left= create();
        printf("Enter the 2nd Town Name:");
        root->left->right= create();
        
        printf("Enter the 3rd Town Name:");
        root->right->left= create();
        printf("Enter the 4th Town Name:");
        root->right->right= create();
        
        // Corporation Name
        printf("Enter the 1st Corporation Name:");
        root->left->left->left= create();
        printf("Enter the 2nd Corporation Name:");
        root->left->left->right= create();
        
        printf("Enter the 3rd Corporation Name:");
        root->left->right->left= create();
        printf("Enter the 4th Corporation Name:");
        root->left->right->right= create();
        
        printf("Enter the 5th Corporation Name:");
        root->right->left->left= create();
        printf("Enter the 6th Corporation Name:");
        root->right->left->right= create();
        
        printf("Enter the 7th Corporation Name:");
        root->right->right->left= create();
        printf("Enter the 8th Corporation Name:");
        root->right->right->right= create();
        break;
    }

    char firstCorporationName[100];
    char secondCorporationName[100];
    printf("Enter the 1st Corporation Name to be Search: ");
    scanf("%s",&firstCorporationName);
    printf("Enter the 2nd Corporation Name to be Search: ");
    scanf("%s",&secondCorporationName);
    
    
    
    // Finding the path of Both the Leaf Nodes from the Root to the Leaf
    char **path=(char**)malloc(4 * sizeof(char));
    for (int i = 0; i < 4; i++) {
        path[i] = (char*)malloc(100 * sizeof(char));
    }
    int pathLength = 0;
    findPathFromRootToLeaf(root, leafNode, path, pathLength);
            
    return 0;
}
