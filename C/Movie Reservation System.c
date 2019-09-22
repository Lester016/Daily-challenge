#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 100
#define USERNAME "admin"
#define PASSWORD "0000"


//For Queueing
struct Customer* front;
struct Customer* rear;
struct Movie *mFront;
struct Movie *mRear;
//---------------------------------------------------------------------------------
//Movie Data
struct Movie
{
    int movieCode;
    char movieTitle[MAX];
    char movieDate[MAX];
    int movieAmount;
    struct Movie *next;
};

//Customer Data
struct Customer
{
    int customerID;
    char customerName[MAX];
    char customerPhoneNumber[MAX];
    int customerSeats;
    char customerReservedMovies[MAX];
    int customerAmountPaid;
    struct Customer *next;
};
//------------------------------------------------------------------------------------------

//Function Prototype
void insertMovie();
void insertCustomer();
void displayMovies();
void displayCustomer();
void newLineRemover(char *);
void deQueue();
void menu();
void login();
void terminator();

//------------------------------------------------------------------------------------------

int main()
{
    atexit(terminator);
    login();
    return 0;
}//Main Driver

//------------------------------------------------------------------------------------------

void insertMovie()
{
    system("cls");
    struct Movie *new_movie = (struct Movie *)malloc(sizeof(struct Movie));
    printf("\n\n\n\n\t\t\t\t----------------------------------\n");
    printf("\t\t\t\t              ADD MOVIE           \n");
    printf("\t\t\t\t----------------------------------\n");
    if(new_movie == NULL)
    {
        printf("Movie is not created");
        return;
    } else {
        srand(time(0));
        new_movie->movieCode = rand() % 1000;
        printf("\t\t\t\tMovie Code: %d\n", new_movie->movieCode);
        printf("\t\t\t\tMovie Title: ");
        getchar();
        fgets(new_movie->movieTitle, MAX, stdin);
        newLineRemover(new_movie->movieTitle);
        printf("\t\t\t\tMovie Date: ");
        fgets(new_movie->movieDate, MAX, stdin);
        newLineRemover(new_movie->movieDate);
        printf("\t\t\t\tMovie Amount: ");
        scanf("%d", &new_movie->movieAmount);
        if(mFront == NULL) {
            mFront = new_movie;
            mRear = new_movie;
            mFront->next = NULL;
            mRear->next = NULL;
        } else {
            mRear->next = new_movie;
            mRear = new_movie;
            mRear->next = NULL;
        }
    }
    printf("\t\t\t\t----------------------------------\n");
    printf("\t\t\t\tMovie successfully added!");
    getch(); system("cls");
}

void insertCustomer()
{
    system("cls");
    struct Movie* current;
    struct Customer *new_customer = (struct Customer *)malloc(sizeof(struct Customer));
    printf("\n\n\n\n\t\t\t\t----------------------------------\n");
    printf("\t\t\t\t          LIST CUSTOMER           \n");
    printf("\t\t\t\t----------------------------------\n");
    if(new_customer == NULL)
    {
        printf("Customer is not created");
        return;
    } else {
        srand(time(0));
        new_customer->customerID = rand() % 1000;
        printf("\t\t\t\tCustomer ID: %d\n", new_customer->customerID);
        printf("\t\t\t\tCustomer Name: "); getchar();
        fgets(new_customer->customerName, MAX, stdin);
        newLineRemover(new_customer->customerName);
        printf("\t\t\t\tCustomer Phone#: ");
        fgets(new_customer->customerPhoneNumber, MAX, stdin);
        newLineRemover(new_customer->customerPhoneNumber);
        printf("\t\t\t\tCustomer Reserved Seat/s: ");
        scanf("%d", &new_customer->customerSeats);
        printf("\t\t\t\tCustomer Reserved Movie/s: "); getchar();
        fgets(new_customer->customerReservedMovies, MAX, stdin);
        newLineRemover(new_customer->customerReservedMovies);
        //----------------------------------------------------------------------------------------
        {
            if(mFront == NULL)
            {
                printf("\t\t\t\tMovie list is empty!\n");
                return;
            }
            current = mFront;
            while(current != NULL)
            {
                if(current->movieTitle == new_customer->customerReservedMovies)
                {
                    printf("%s exist", new_customer->customerReservedMovies);
                }
                current = current->next;
            }
            printf("\t\t\t\t%s does not exist in the list\n", new_customer->customerReservedMovies);
        }
        //-----------------------------------------------------------------------------------------
        printf("\t\t\t\tCustomer Amount Paid: ");
        scanf("%d", &new_customer->customerAmountPaid);
        if(front == NULL) {
            front = new_customer;
            rear = new_customer;
            front->next = NULL;
            rear->next = NULL;
        } else {
            rear->next = new_customer;
            rear = new_customer;
            rear->next = NULL;
        }
    }
    printf("\t\t\t\t----------------------------------\n");
    printf("\t\t\t\tCustomer successfully listed!");
    getch(); system("cls");
}

void deQueue()
{
    system("cls");
    struct Movie* first;
    printf("\n\n\n\n\t\t\t\t----------------------------------\n");
    printf("\t\t\t\t            DEQUEUEING            \n");
    printf("\t\t\t\t----------------------------------\n");
    if(mFront == NULL) {
        printf("\t\t\t\t\tMovie list is empty!\n");
        getch(); system("cls");
        return;
    } else {
        first = mFront;
        mFront = mFront->next;
        free(first);
    }
    getch(); system("cls");
}

void displayMovies()
{
    system("cls");
    printf("\n\n\n\n\t\t\t\t----------------------------------\n");
    printf("\t\t\t\t           MOVIE LIST             \n");
    printf("\t\t\t\t----------------------------------\n");
    struct Movie *first;
    first = mFront;
    if(mFront == NULL) {
        printf("\t\t\t\tMovie list is empty!\n");
    } else {
        for(int i = 1; i <= 2; i++)
            {
                while(first != NULL)
                {
                    printf("%9d |", i);
                    printf("\t%9d", first->movieCode);
                    printf("\t%-9s", first->movieTitle);
                    printf("\t%-9s", first->movieDate);
                    printf("\t%9d", first->movieAmount);
                    first = first->next;
                    i++;
                    printf("\n");
                }
            }
    }
    getch(); system("cls");
}

void updateCustomer()
{
    system("cls");
    struct Customer *current;
    int customerID;
    int pos = 1;
    printf("\n\n\n\n\t\t\t\t----------------------------------\n");
    printf("\t\t\t\t        UPDATE CUSTOMER           \n");
    printf("\t\t\t\t----------------------------------\n");
    if(front == NULL)
    {
        printf("\t\t\t\tCustomer list is empty!\n");
        return;
    }
    current = front;
    printf("\t\t\t\tEnter customer ID: ");
    scanf("%d", &customerID);
    while(current != NULL)
    {
        if(current->customerID == customerID)
        {
            printf("\t\t\t\tCustomer ID: %d\n", current->customerID);
            printf("\t\t\t\tCustomer Name: "); getchar();
            fgets(current->customerName, MAX, stdin);
            newLineRemover(current->customerName);
            printf("\t\t\t\tCustomer Phone#: ");
            fgets(current->customerPhoneNumber, MAX, stdin);
            newLineRemover(current->customerPhoneNumber);
            printf("\t\t\t\tCustomer Reserved Seat/s: ");
            scanf("%d", &current->customerSeats);
            printf("\t\t\t\tCustomer Reserved Movie/s: ");
            scanf("%d", &current->customerReservedMovies);
            fgets(current->customerReservedMovies, MAX, stdin);
            printf("\n\t\t\t\t%d found at row %d\n", customerID, pos);
            getch(); system("cls");
            return;
        }
        current = current->next;
        pos++;
    }
    printf("\t\t\t\t%d does not exist in the list\n", customerID);
    getch(); system("cls");
}

void displayCustomer()
{
    system("cls");
    struct Customer *first;
    printf("\n\n\n\n\t\t\t\t----------------------------------\n");
    printf("\t\t\t\t         CUSTOMER LIST            \n");
    printf("\t\t\t\t----------------------------------\n");
    first = front;
    if(front == NULL) {
        printf("\t\t\t\tCustomer list is empty!");
    } else {
        for(int i = 1; i <= 2; i++)
            {
                while(first != NULL)
                {
                    printf("%9d |", i);
                    printf("%9d", first->customerID);
                    printf("\t%-9s", first->customerName);
                    printf("%-9s", first->customerPhoneNumber);
                    printf("%9d", first->customerSeats);
                    printf("%-9s", first->customerReservedMovies);
                    printf("%9d", first->customerAmountPaid);
                    first = first->next;
                    i++;
                    printf("\n");
                }
            }
    }
    getch(); system("cls");
}

void menu()
{
    struct Movie *firstMovie = NULL;
    struct Customer *firstCustomer = NULL;
    static int choice;
    do{
        printf("\n\n\n\n\t\t\t\t----------------------------------\n");
        printf("\n\t\t\t\t     MOVIE RESERVATION SYSTEM     \n");
        printf("\n\t\t\t\t----------------------------------\n");
        printf("\t\t\t\t[1] Insert movie details: ");
        printf("\n\t\t\t\t[2] Reserve a ticket/s: ");
        printf("\n\t\t\t\t[3] Display all movies: ");
        printf("\n\t\t\t\t[4] Display all customers: ");
        printf("\n\t\t\t\t[5] Update customer: ");
        printf("\n\t\t\t\t[6] Dequeue movies: ");
        printf("\n\t\t\t\t[0] EXIT\n");
        printf("\t\t\t\t----------------------------------\n");
        printf("\t\t\t\tSelect an option: ");
        scanf("%d", &choice);
        switch(choice)
        {
        case 1:
            insertMovie();
            break;
        case 2:
            insertCustomer();
            break;
        case 3:
            displayMovies(firstMovie);
            break;
        case 4:
            displayCustomer();
            break;
        case 5:
            updateCustomer();
            break;
        case 6:
            deQueue();
            break;
        case 0:
            exit(0);
        default:
            printf("Your choice was not found!\n");
            system("cls");
        }
    }while(choice != 0);
}

void newLineRemover(char *str)
{
    int len;
    len = strlen(str);
    if (str[len - 1] == '\n')
        str[len - 1] = 0;
}

void login()
{
    int x, y, n = 1, c = 5;
    char username[MAX], password[MAX];
    do{
        printf("\n\n\n\n\t\t\t\t-------------------------------\n");
        printf("\t\t\t\t     WELCOME TO ADMIN PANEL    \n");
        printf("\t\t\t\t-------------------------------\n");
        printf("\n\t\t\t\tDefault username: \"admin\"");
        printf("\n\t\t\t\tDefault password: \"0000\"\n\n");
        printf("\n\t\t\t\tUsername: ");
        scanf("%s", username);

        printf("\t\t\t\tPassword: ");
        scanf("%s", &password);

        x = strcmp(username, USERNAME);
        y = strcmp(password, PASSWORD);

        if( x == 0 && y == 0 ) {
            printf("\n\t\t\t\tSuccessfully Logged In\n");
            system("cls");
            menu();
            break;
        } else {
            printf("\n\t\t\t\tWrong Password, try again");
            printf("\n\t\t\t\t%d tries left", --c);
            getch();system("cls");
            getch();
            n++;
        }

        if( n > 5 ){
            printf("\n\t\t\t\tAccess Denied");
            getch();
        }
    }while( n <= 5 );
}

void terminator()
{
    system("cls");
    printf("\n\n\n\t\t\t\t\t----------------------------\n");
    printf("\n\t\t\t\t\t         THANK YOU!         \n");
    printf("\n\t\t\t\t\t----------------------------\n");
    printf("\n\n\n\n\n");
}
