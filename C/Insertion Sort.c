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
    for (int i = 1; i < arrSize; ++i) {
        for(int j = i; j > 0; j--) { 
            if(arr[j - 1] > arr[j]){
                int temp = arr[j];
                arr[j] = arr[j - 1]; 
                arr[j - 1] = temp; 
             }
         }
    }

    printf("\nSorted array: ");
    for (int k = 0; k < arrSize; ++k) {
        printf("%d ", arr[k]);
    }
}
