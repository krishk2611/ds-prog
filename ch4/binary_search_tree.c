#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}
struct Node* insert(struct Node* root, int data) {
    if (root == NULL) {
        return createNode(data);
    }
    if (data < root->data) {
        root->left = insert(root->left, data);
    } else if (data > root->data) {
        root->right = insert(root->right, data);
    }
    return root;
}

struct Node* minValueNode(struct Node* node) {
    struct Node* current = node;
    while (current && current->left != NULL) {
        current = current->left;
    }
    return current;
}

struct Node* deleteNode(struct Node* root, int data) {
    if (root == NULL) return root;

    if (data < root->data) {
        root->left = deleteNode(root->left, data);
    } else if (data > root->data) {
        root->right = deleteNode(root->right, data);
    } else {
        if (root->left == NULL) {
            struct Node* temp = root->right;
            free(root);
            return temp;
        } else if (root->right == NULL) {
            struct Node* temp = root->left;
            free(root);
            return temp;
        }

        struct Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

int findHeight(struct Node* root) {
    if (root == NULL) {
        return -1; // -1 for empty tree, 0 for root only
    }
    int leftHeight = findHeight(root->left);
    int rightHeight = findHeight(root->right);
    return (leftHeight > rightHeight ? leftHeight : rightHeight) + 1;
}

int countNodes(struct Node* root) {
    if (root == NULL) {
        return 0;
    }
    return 1 + countNodes(root->left) + countNodes(root->right);
}

void inorderTraversal(struct Node* root) {
    if (root != NULL) {
        inorderTraversal(root->left);
        printf("%d ", root->data);
        inorderTraversal(root->right);
    }
}

int main() {
    struct Node* root = NULL;

    root = insert(root, 50);
    insert(root, 30);
    insert(root, 70);
    insert(root, 20);
    insert(root, 40);
    insert(root, 60);
    insert(root, 80);

    printf("Initial BST (Inorder): ");
    inorderTraversal(root);
    printf("\n");

    printf("Total number of nodes: %d\n", countNodes(root));

    printf("Height of the tree: %d\n\n", findHeight(root));

    printf("Deleting node 20...\n");
    root = deleteNode(root, 20);

    printf("BST after deletion (Inorder): ");
    inorderTraversal(root);
    printf("\n");

    printf("Total number of nodes: %d\n", countNodes(root));
    printf("Height of the tree: %d\n", findHeight(root));

    return 0;
}
