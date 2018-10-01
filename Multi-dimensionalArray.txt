#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sumRow[5] = {0}, sumColumn[5] = {0};
    int myArray[5][5] = {
        {1,3,4,5,6},
        {5,2,1,6,7},
        {8,1,3,9,2},
        {1,8,4,5,1},
        {1,2,4,7,3}
        };
    for(int j = 0; j <= 4; j++){
        for(int i = 0; i <= 4; i++){
            printf("%d ", myArray[j][i]);
            sumRow[j] = sumRow[j] + myArray[j][i];
            sumColumn[j] = sumColumn[j] + myArray[i][j];
        }

        printf("\n");
    }
    printf("\n");
    for(int l = 0; l <= 4; l++){
        printf("Sum of Row %d is %d\n", l+1, sumRow[l]);
    }
    printf("\n");
    for(int k = 0; k <= 4; k++){
        printf("Sum of Column %d is %d\n", k+1, sumColumn[k]);
    }
}
