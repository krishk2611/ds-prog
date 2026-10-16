#include <stdio.h>
#include <stdlib.h>

//Structure of a binary tree node
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

//Function to create a new node
struct Node* createNode(int value)
{
    struct Node *newNode;

    newNode=(struct Node* )malloc(sizeof(struct Node));

    newNode->data=value;
    newNode->left=NULL;
    newNode->right=NULL;

    return newNode;
}


struct Node* insert (struct Node *root ,int value)
{
    if (root==NULL)
    {
    return createNode(value);
    }
     else if(value < root->data)
    {
        root->left= insert(root->left,value);

    }
    else if (value > root->data)
    {
    root->right=insert (root->right,value);
    }
    return root;
}

//preorder Traversal : Root,left ,right
void preorder (struct Node *root )
{
    if (root !=NULL)
    {
        printf("%d " ,root->data);
        preorder (root->left);
        preorder(root->right);
    }

}

//inorder Traversal : left,root ,right
void inorder(struct Node *root )
{
    if (root !=NULL)
    {

        inorder (root->left);
        printf("%d " ,root->data);
       inorder(root->right);
    }

}

//postorder Traversal : left,right ,root
void postorder(struct Node *root )
{
    if (root !=NULL)
    {

        postorder (root->left);
       postorder(root->right);
        printf("%d " ,root->data);
    }

}

void main()
{
    struct Node *root = NULL;

    // creating the binary tree
    root=insert (root,6);
    root=insert (root,5);
    root=insert (root,9);
    root=insert (root,10);
    root=insert (root,11);
    root=insert (root,13);
    root=insert (root,4);
    root=insert (root,3);
    root=insert (root,7);
    root=insert (root,12);

    printf("preorder Traversal : ");
    preorder(root);
    printf("\n");

    printf("inorder Traversal : ");
    inorder(root);
    printf("\n");

    printf("postorder Traversal : ");
    postorder(root);
    printf("\n");
}
