#include <stdio.h>
#include <stdlib.h>

int main()
{
    int armStrong, arms, i, ones, tens, hundreds, sum, temp, temp1, temp2;
    printf("Enter a number to be check if it's an Armstrong number\n");
    scanf("%d", &armStrong);
    arms = armStrong;
    ones = armStrong%10;
    armStrong /= 10;
    tens = armStrong%10;
    armStrong /= 10;
    hundreds = armStrong;
    temp = ones;
    temp1 = tens;
    temp2 = hundreds;
    for(i = 2; i > 0; i--){
        ones = ones * temp;
        tens = tens * temp1;
        hundreds = hundreds * temp2;
    }
    sum = ones + tens + hundreds;
    if(arms == sum){
        printf("%d is an Armstrong number", arms);
    }else{
        printf("%d is not an Armstrong number", arms);
    }


    return 0;
}
