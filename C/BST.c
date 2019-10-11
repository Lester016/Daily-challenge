
// C program to demonstrate insert operation in binary search tree
#include<stdio.h>
#include<stdlib.h>

struct node {
    int key;
    struct node *left, *right;
};

// A utility function to create a new BST node
struct node *newNode(int item) {
    struct node *temp = (struct node *) malloc(sizeof(struct node));
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

void printLeft(struct node *root) {
        while (root->left != NULL || root->key != 0) {
            root = root->left;
            printf(" LEFT: %d \n", root->key);
        }

}

void printRight(struct node *root) {
    while (root->right != NULL || root->key != 0) {
        root = root->right;
        printf(" RIGHT: %d \n", root->key);
    }

}

/* A utility function to insert a new node with given key in BST */
struct node *insert(struct node *node, int key) {
    /* If the tree is empty, return a new node */
    if (node == NULL) return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key) {
        node->left = insert(node->left, key);
    } else if (key > node->key) {
        node->right = insert(node->right, key);
    }


    /* return the (unchanged) node pointer */
    return node;
}

// Driver Program to test above functions
int main() {
    /* Let us create following BST
              50
           /     \
          30      70
         /  \    /  \
       20   40  60   80 */
    struct node *root = NULL;
    root = insert(root, 20);
    insert(root, 17);
    insert(root, 25);
    insert(root, 15);
    insert(root, 10);
    insert(root, 12);
    insert(root, 16);
    insert(root, 17);

    printRight(root);
    return 0;
}

