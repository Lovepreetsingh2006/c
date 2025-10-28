#include <stdio.h>

 int selectionSort(int arr[], int n) {
    int i, j, minIndex;
    for (i = 0; i < n - 1; i++) {
        minIndex = i;
        for (j = i + 1; j < n; j++) {
            if (arr[minIndex] > arr[j])
            minIndex = j;
        }
        if(i!=minIndex){
            arr[i] ^= arr[minIndex];
            arr[minIndex] ^= arr[i];
            arr[i] ^= arr[minIndex];
        }
    }
}
int main() {
    int arr[] = {25, 64, 12, 11, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
    selectionSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
    printf("%d ", arr[i]);
    printf("\n");
}
