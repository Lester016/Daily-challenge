#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Node {
    int movieCode;
    char movieTitle[100];
    char showingDate[100];
    int ticketAmount;
    struct Node *next;
};

void insertMovie(struct Node **n, int movieCode, char movieTitle[], char showingDate[], int ticketAmount) {

}

void listMovie(struct Node *n) {
    while (n->movieCode != 0) {
        printf("Movie Code: %d \n", n->movieCode);
        printf("Title: %s \n", n->movieTitle);
        printf("Showing on: %s \n", n->showingDate);
        printf("Amount: %d", n->ticketAmount);
        printf("\n================================================\n");
        n = n->next;
    }
};

void lineRemove(char str[]) {
    int len;
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = 0;
}

void menu(struct Node **n, int menuChoiced) {
    char movieTitle[100];
    char showingDate[100];
    int movieCode;
    int ticketAmount;

    struct Node *newNode = (struct Node *) malloc(sizeof(struct Node));

    switch (menuChoiced) {
        case 1:
            printf("\n\t\t\tInsert movie details\n\n");
            movieCode = rand();
            printf("Movie code: %d\n", movieCode);

            printf("Movie title: ");
            getchar();
            fgets(movieTitle, 100, stdin);
            lineRemove(movieTitle);

            printf("Movie showing date: ");
            fgets(showingDate, 100, stdin);
            lineRemove(showingDate);

            printf("Ticket amount: ");
            scanf("%d", &ticketAmount);

            newNode->movieCode = movieCode;
            strcpy(newNode->movieTitle, movieTitle);
            strcpy(newNode->showingDate, showingDate);
            newNode->ticketAmount = ticketAmount;
            newNode->next = (*n);
            *n = newNode;
            break;
        case 2:
            break;
        case 3:
            printf("\n\t\t\t\tMovie Lists\n\n");
            listMovie(*n);
            break;
        case 4:
            break;
        case 5:
            break;
    }
}

int main() {
    char username[100], password[100];
    int menuChoiced;
    struct Node *head = (struct Node *) malloc(sizeof(struct Node));


    printf("\n================================================\n");
    printf("\t\tMovie Reservation Ticket System");
    printf("\n================================================\n");

    printf("\n\t\t\t\t\tLogin\n\n");
    printf("Username: ");
    fgets(username, 100, stdin);
    lineRemove(username);

    printf("Password: ");
    gets(password);
    lineRemove(password);

    printf("\n================================================\n");
    printf("\t\tWelcome to CINEMA 1, %s!", username);
    printf("\n================================================\n");

    do {
        printf("\n\t\t\t\t\tMenu\n\n");
        printf("1. Insert movie details\n");
        printf("2. Reserve a ticket(s)\n");
        printf("3. Display all movies\n");
        printf("4. Display all customers\n");
        printf("5. Dequeue Movies\n");
        printf("6. Exit\n");
        scanf("%d", &menuChoiced);
        menu(&head, menuChoiced);
    } while (menuChoiced != 6);


    return 0;
}


