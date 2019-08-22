#include <stdio.h>
#include <stdlib.h>

int main()
{
    int goldCoins, AmericanDollar;
    scanf("%d", &goldCoins);
    AmericanDollar = (goldCoins/2) + (goldCoins/3) + (goldCoins/4);
    if(AmericanDollar >= goldCoins){
        printf("%d", AmericanDollar);
    }else{
        printf("%d", goldCoins);
    }

    return 0;
}
