#include <stdio.h>

int main() {
    int quiz[3], Students[2];
    int average;
    for (int i = 1; i <= 2; ++i) {
        printf("Student %d\n", i);
        for (int j = 0; j <= 2; ++j) {
            printf("Enter grade in quiz %d:", j+1);
            scanf("%d", &quiz[j]);
            average += quiz[j];
        }
        if (average >= 75){
            printf("Passed!\n");
        } else {
            printf("Failed!\n");
        }
    }
    return 0;
}
