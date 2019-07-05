#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, mod, holder = 0, holder1 = 0, sum = 0;
    scanf("%d", &a);
    scanf("%d", &b);
    while(a != 0){
        mod = a % 10;
        holder = (holder * 10) + mod;
        a = a / 10;
    }
    while(b != 0){
        mod = b % 10;
        holder1 = (holder1 * 10) + mod;
        b = b / 10;
    }
    holder = holder + holder1;
    while(holder != 0){
        mod = holder % 10;
        sum = (sum * 10) + mod;
        holder = holder / 10;
    }
    printf("%d\n", sum);
    return 0;
}
