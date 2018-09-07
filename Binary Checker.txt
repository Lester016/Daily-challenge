#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp, mod, temp;
    printf("Binary Checker\n");
    scanf("%d", &inp);

    while(inp > 0){
        mod = inp % 10;
        temp = mod;
        inp = inp / 10;
        if(temp > 1){
            break;
        }
    }
    if(temp == 0 || temp == 1){
        printf("Binary!");
    }else{
        printf("Not a binary!");
    }
    return 0;
}
