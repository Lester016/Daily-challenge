// A simple C program to introduce 
// a linked list 
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node {
    int ID;
    char studentName[50];
    int studentGrade;
    struct Node *next;
};

void printList(struct Node *n) {
    while (n->ID != 0) {
        printf(" ID: %d \n", n->ID);
        printf(" Name: %s \n", n->studentName);
        printf(" Grade: %d \n", n->studentGrade);
        printf("\n\n\n");

        n = n->next;
    }
};

bool search(struct Node *head, int checkID) {
    if (head == NULL) {
        return false;
    }

    if (head->ID == checkID) {
        printf("\n");
        printf("Student Name: %s \n", head->studentName);
        printf("Student Grade: %d \n", head->studentGrade);
        printf("\n\n");
    }

    return search(head->next, checkID);
}

void insert(struct Node **n){
    int ID;
    char studentName[50];
    int studentGrade;

    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));
    if(newNode == NULL)
    {
        printf("Error creating a new node.\n");
        exit(0);
    }
    printf("Enter a student ID: ");
    scanf("%d", &ID);
    printf("Enter a student Name: ");
    scanf("%s", &studentName);
    printf("Enter a student Grade: ");
    scanf("%d", &studentGrade);

    newNode->ID = ID;
    strcpy(newNode->studentName, studentName);
    newNode->studentGrade = studentGrade;
    newNode->next = (*n);
    *n = newNode;
}
void delete (struct Node **n, int ID)
{
    struct Node *temp = *n, *prev;

    // If head node itself holds the key to be deleted
    if (temp != NULL && temp->ID == ID)
    {
        *n = temp->next;   // Changed head
        free(temp);               // free old head
        printf("Successfully Deleted!\n");
        return;
    }
    // Search for the key to be deleted, keep track of the
    // previous node as we need to change 'prev->next'
    while (temp != NULL && temp->ID != ID)
    {
        prev = temp;
        temp = temp->next;
    }

    // If key was not present in linked list
    if (temp == NULL) return;

    // Unlink the node from linked list
    prev->next = temp->next;

    free(temp);  // Free memory
    printf("Successfully Deleted!\n");

}

int main() {
    int menu;
    int checkID;
    char con = 'y';
    struct Node *head = (struct Node *) malloc(sizeof(struct Node));

    do {
        printf("Menu: \n");
        printf("1.) Insert\n");
        printf("2.) List\n");
        printf("3.) Search\n");
        printf("4.) Delete\n");
        printf("5.) Exit\n");
        scanf("%d", &menu);
        printf("\n\n");

        switch (menu) {
            case 1:
                do {
                    insert(&head);
                    printf("Do you want to continue [Y]/[N]");
                    scanf(" %c", &con);
                } while (con == 'y' || con == 'Y');
                break;
            case 2:
                printf("List\n");
                printList(head);
                break;
            case 3:
                printf("Search\n");
                printf("Enter ID: ");
                scanf("%d", &checkID);
                search(head, checkID);
                break;
            case 4:
                printf("Delete\n");
                printf("Enter ID: ");
                scanf("%d", &checkID);
                delete(&head, checkID);
                break;
            case 5:
                printf("Exit\n");
                break;
            default:
                printf("Default!");
        }
    } while (menu != 5);
    return 0;
} 

