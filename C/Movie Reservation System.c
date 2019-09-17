#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void lineRemove(char str[]) {
    int len;
    len = strlen(str);
    if( str[len-1] == '\n' )
        str[len-1] = 0;
}

void menu(menuChoiced) {
    char movieTitle[100];
    char showingDate[100];
    int ticketAmount;
    int len;

    switch (menuChoiced) {
        case 1:
            printf("\n\t\t\tInsert movie details\n");

            printf("Movie code: %d\n", rand());

            printf("Movie title: ");
            getchar();
            fgets(movieTitle, 100, stdin);
            lineRemove(movieTitle);

            printf("Movie showing date: ");
            fgets(showingDate, 100, stdin);
            lineRemove(showingDate);

            printf("Ticket amount: ");
            scanf("%d", &ticketAmount);

            break;
        case 2:
            break;
        case 3:
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
    int len;

    printf("\n================================================\n");
    printf("\t\tMovie Reservation Ticket System");
    printf("\n================================================\n");

    printf("\n\t\t\t\t\tLogin\n");
    printf("Username: ");
    fgets(username, 100, stdin);
    lineRemove(username);
    printf("Password: ");
    gets(password);
    lineRemove(password);
    printf("\n================================================\n");
    printf("\t\tWelcome to CINEMA 1, %s!", username);
    printf("\n================================================\n");

    printf("\n\t\t\t\t\tMenu\n");
    printf("1. Insert movie details\n");
    printf("2. Reserve a ticket(s)\n");
    printf("3. Display all movies\n");
    printf("4. Display all customers\n");
    printf("5. Dequeue Movies\n");
    printf("6. Exit\n");
    scanf("%d", &menuChoiced);
    menu(menuChoiced);

    return 0;
}
