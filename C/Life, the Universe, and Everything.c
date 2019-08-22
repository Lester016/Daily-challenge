#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp[5], i=0, j=0;
    do{
        scanf("%i", &inp[i]);
        i++;
    }while(inp[i-2] != 42);
    while(j<i){
        if(inp[j] != 42 && inp[j] < 100){
            printf("\n%i", inp[j]);
        }else{
            j = 5;
        }
        j++;
    }
    return 0;
}
