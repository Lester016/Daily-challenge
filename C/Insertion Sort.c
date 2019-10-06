#include <stdio.h>

int main() {
    printf("Insertion Sort\n");
    int arr[] = {4, 3, 5, 6, 12, 2, 1, 8};
    int arrSize = sizeof(arr) / sizeof(arr[0]);

    printf("Given array: ");
    for (int l = 0; l < arrSize; ++l) {
        printf("%d ", arr[l]);
    }
    
    // Insertion algorithm.
    for (int i = 0; i < arrSize; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    printf("\nSorted array: ");
    for (int k = 0; k < arrSize; ++k) {
        printf("%d ", arr[k]);
    }
}
