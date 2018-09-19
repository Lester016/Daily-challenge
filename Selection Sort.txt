#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myArray[8] = {16, 8, 23, 69, 5, 1, 11, 100}, i, j, k, m, min, index, temp, z;


    for(j = 0; j <= 8; j++){
        min = myArray[j];
        for(i = j; i <= 8; i++){
            if(myArray[i] < min){
                min = myArray[i];
                z = i;
            }
        }
        temp = myArray[j];
        myArray[j] = myArray[z];
        myArray[z] = temp;
    }
    for(m = 0; m < 8; m++){
        printf("%d ", myArray[m]);
    }
}
