#include <stdio.h>
#include <stdlib.h>

int calculation(float a, float b);
int main()
{
    int total, part;
    printf("Percentage Calculator!\n");
    printf("Enter the Total: ");
    scanf("%d", &total);
    printf("\nEnter the part: ");
    scanf("%d", &part);
    calculation(total, part);
}
int calculation(float a, float b){
    float perc;
    perc = (b / a) * 100;
    printf("\nThe percentage is %.2f%% ", perc);
}
