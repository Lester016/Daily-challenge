#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, i, z = 5, temp = 0;
    printf("How many N you want to solve: ");
    scanf("%d", &t);
    int n;
    for(i = t; i > 0; i--){
        scanf("%d", &n);
        while(n > z){
            temp = temp + n / z;
            z = z * 5;
        }
        printf("there are %d trailing zeroes in %d\n", temp, n);
        temp = 0;
        z = 5;
    }
}
