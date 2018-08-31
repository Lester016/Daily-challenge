#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp, start = 0, i, temp, prev = 1;
    printf("fibonacci sequence enter some value: ");
    scanf("%d", &inp);

    while(inp > start){
        temp = start;
        printf("%d ", start);
        prev = temp + prev;
        start = prev + start;
        if(inp >= prev){
            printf("%d ", prev);
        }
    }
}
