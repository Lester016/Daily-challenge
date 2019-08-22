#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size = 0, array[size], i = 0, j = 0, loc, val, k = 0, l = 0, temp, m = 0;
    printf("input array size: ");
    scanf("%d", &size);
    for(i; i < size; i++){
        printf("enter %d :", i+1);
        scanf("%d", &array[i]);
    }
    for(j; j < size; j++){
        printf("| %d |", array[j]);
    }

    printf("\n\n\ninput the array location: ");
    scanf("%d", &loc);
    printf("\n\n\ninput the array value: ");
    scanf("%d", &val);

    size++;
    for(k = loc; size >= k; k++){
        temp = array[k];
        array[k+1] = temp;
    }
    array[loc] = val;
    for(l; l <= size; l++){
        printf("| %d |", array[l]);
    }

}

