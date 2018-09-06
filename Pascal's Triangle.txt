#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row, i, j, k, a = 1;
    printf("Pascal's Triangle.\n\n\n\n\n");
    printf("Enter nth row: ");
    scanf("%d", &row);

    for(i = 0; i < row; i++){
        for(j = row; j > i; j--){
            printf(" ");
        }
        for(k = 0; k <= i; k++){
            if(k == 0){
                a = 1;
            }else{
                a = a * (i-k+1)/k;
            }

            printf(" %d", a);
        }
        printf("\n");
    }
}
