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

void print(struct node *root) {
    if (root->key != 0) {
        if (root->left != NULL) {
            printf("LEFT \t:\t %d\n", root->left->key);
        }

        if (root->right != NULL) {
            printf("RIGHT \t:\t %d\n", root->right->key);
        } else {
            printf("RIGHT \t:\t %d\n", root->key);
        }

        print(root->left);
        print(root->right);
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
    int inputRoot, input;
    char con;

    struct node *root = NULL;
    printf("Input Root : ");
    scanf("%d", &inputRoot);
    root = insert(root, inputRoot);
    do {
        printf("Input Child : ");
        scanf("%d", &input);
        insert(root, input);
        printf("Do you want to continue [Y]/[N]: ");
        scanf(" %c", &con);
    } while (con == 'y' || con == 'Y');

    printf("ROOT \t:\t %d\n", root->key);
    print(root);
    return 0;
}
