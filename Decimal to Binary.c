#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dec;
    printf("Enter Integer\n");
    scanf("%d", &dec);
    binary(dec);
}
void binary(int a){
    int bin = 0, mod, temp, base = 1;
    temp = a;
    do{
            mod = a % 2;
            a = a / 2;
            bin = bin + (base * mod);
            base = base * 10;
    }while(a > 0);
        printf("%d", bin);
}
