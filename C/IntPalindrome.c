#include <stdio.h>

// Create a program that will determine if an integer is a palindrome or not.
// Note: The input should only be integer.

int main() {
    int inp, temp, palindrome = 0, tempInp;
    printf("Enter integer:");
    scanf("%d", &inp);

    tempInp = inp;

    while (inp != 0) {
        temp = inp % 10;
        palindrome = (palindrome * 10) + temp;
        inp = inp / 10;
    }

    if (palindrome == tempInp) {
        printf("Palindrome!");
    }else {
        printf("Not a palindrome!");
    }
    
    return 0;
}
