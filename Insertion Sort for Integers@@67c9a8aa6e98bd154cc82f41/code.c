#include <stdio.h>

// Declare the function
void insertionSort(int arr[], int n);

int main() {
    int arr[5] = {9, 2, 5, 1, 7};
    int n = 5;

    insertionSort(arr, n);

    // Print sorted array
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
