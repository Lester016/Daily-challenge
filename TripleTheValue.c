#include <stdio.h>

int main() {
    int num1, num2;
    int tripledValue;
    printf("Enter integers in num1: ");
    scanf("%d", &num1);
    printf("Enter integers in num2: ");
    scanf("%d", &num2);
    if (num1 == num2){
        tripledValue = (num1 + num2) * 3;
        printf("%d", tripledValue);
        return 0;
    }
    printf("%d", num1 + num2);
    return 0;
}
