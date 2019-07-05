#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n[1000], m[1000], temp, j, term;
    printf("Enter number of terms: ");
    scanf("%d", &term);
    for(i = 0; i < term; i++){
        printf("\nEnter a number: ");
        scanf("%i", &n[i]);
    }
    for(i=term; i>=0; i--){
        for(j = 0; j < term; j++){
            if(n[j] < n[j+1]){
            }else{
                temp = n[j];
                n[j] = n[j+1];
                n[j+1] = temp;
            }
        }
    }
    printf("Lowest to Highest:\n");
    for(i=0; i<term; i++){
        printf("%d\n", n[i]);
    }
    printf("Highest to Lowest:\n");
    for(i=term-1; i>=0; i--){
        printf("%d\n", n[i]);
    }
}
