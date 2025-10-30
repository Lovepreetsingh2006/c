#include <stdio.h>
int binarySearch(int arr[], int key, int low, int high) {
    while (low <= high) {
        int mid = (low + high) / 2;
        if (key == arr[mid])
            return mid + 1;
        else if (key > arr[mid])
            low = mid + 1;
        else
            high = mid - 1;
    }
    return low;
}
void modifiedInsertSort(int arr[], int n) {
    int i, j, key, loc;

    for (i = 1; i < n; i++) {
        key = arr[i];

        loc = binarySearch(arr, key, 0, i - 1);

        for (j = i - 1; j >= loc; j--)
            arr[j + 1] = arr[j];
        arr[loc] = key;
    }
}

int main() {
    int arr[] = {25, 64, 12, 11, 22};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    modifiedInsertSort(arr, n);

    printf("\nSorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
