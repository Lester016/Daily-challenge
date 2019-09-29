#include <stdio.h>

int main() {
    int menu;
    int items[100];
    int i = 0;


    printf("STACK EVEN POP\n");

    do {
        printf("\tMenu\n");
        printf("1.) Insert integers\n");
        printf("2.) Display items\n");
        printf("3.) Pop items\n");
        printf("4.) Exit\n");
        scanf("%d", &menu);
        switch (menu) {
            case 1:
                printf("Insert Integers: ");
                scanf("%d", &items[i]);
                i++;
                break;
            case 2:
                printf("Integers List\n");
                for (int j = 0; j < i; ++j) {
                    printf("%d\n", items[j]);
                }
                break;
            case 3: // Pop the last even index in the list.
                printf("Last even index was popped!\n");
                // If last index is even, subtract i variable to reassign in case 1.
                if (i % 2 == 0) {
                    i -= 1;
                } else {
                    // If last index is odd, get the last index to move in the last even index.
                    items[i - 2] = items[i - 1];
                    i -= 1;
                }
                break;
            default:
                printf("Invalid choice, please try again.\n");
                break;
        }
    } while (menu != 4);

}

