// C program for different tree traversals
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool foundx = false;
bool foundy = false;

/* A binary tree node has data, pointer to left child
and a pointer to right child */
struct node {
    int data;
    struct node *left;
    struct node *right;
};

// Search in the tree.
void searchx(struct node *node, int checkEl) {
    if (node == NULL)
        return;

    // first recur on left subtree
    searchx(node->left, checkEl);

    // then recur on right subtree
    searchx(node->right, checkEl);

    // now deal with the node
    if (node->data == checkEl) {
        printf("[%d] ", node->data);
        foundx = true;
    } else {
        printf("%d ", node->data);
    }
}

void searchy(struct node *node, int checkEl) {
    if (node == NULL)
        return;

    // first recur on left subtree
    searchy(node->left, checkEl);

    // then recur on right subtree
    searchy(node->right, checkEl);

    // now deal with the node
    if (node->data == checkEl) {
        printf("[%d] ", node->data);
        foundy = true;
    } else {
        printf("%d ", node->data);
    }
}

/* Helper function that allocates a new node with the
given data and NULL left and right pointers. */
struct node *newNode(int data) {
    struct node *node = (struct node *)
            malloc(sizeof(struct node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return (node);
}

/* Given a binary tree, print its nodes according to the
"bottom-up" postorder traversal. */
void printPostorder(struct node *node) {
    if (node == NULL)
        return;

    // first recur on left subtree
    printPostorder(node->left);

    // then recur on right subtree
    printPostorder(node->right);

    // now deal with the node
    printf("%d ", node->data);
}

/* Given a binary tree, print its nodes in inorder*/
void printInorder(struct node *node) {
    if (node == NULL)
        return;

    /* first recur on left child */
    printInorder(node->left);

    /* then print the data of node */
    printf("%d ", node->data);

    /* now recur on right child */
    printInorder(node->right);
}

/* Given a binary tree, print its nodes in preorder*/
void printPreorder(struct node *node) {
    if (node == NULL)
        return;

    /* first print data of node */
    printf("%d ", node->data);

    /* then recur on left sutree */
    printPreorder(node->left);

    /* now recur on right subtree */
    printPreorder(node->right);
}

/* Driver program to test above functions*/
int main() {
    int x, y;
    struct node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);

    printf("\nPreorder traversal of binary tree is \n");
    printPreorder(root);

    printf("\nInorder traversal of binary tree is \n");
    printInorder(root);

    printf("\nPostorder traversal of binary tree is \n");
    printPostorder(root);

    printf("\nSearch For: ");
    scanf("%d", &x);

    printf("\nSearch For: ");
    scanf("%d", &y);

    searchx(root, x);
    if (foundx) {
        printf("Element Found!");
    } else {
        printf("Element is not found");
    }

    printf("\n");

    searchy(root, y);
    if (foundy) {
        printf("Element Found!");
    } else {
        printf("Element is not found");
    }
    return 0;
}

