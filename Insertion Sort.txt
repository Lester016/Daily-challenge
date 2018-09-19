#include <stdio.h>
#include <stdlib.h>

int main()
{
    int myArray[8] = {4, 3, 2, 10, 12, 1, 5, 6}, i, j, k, temp, z;
    for(i = 0; i <= 7; i++){
        for(j = 0; j < i; j++){
            if(myArray[i] < myArray[j]){
                temp = myArray[j];
                myArray[j] = myArray[i];
                myArray[i] = temp;
            }
        }
    }
    for(k = 0; k < i; k++){
          printf("%d ", myArray[k]);
    }
}
