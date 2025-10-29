#include <stdio.h>
void insertSort(int arr[], int n) {
    int i,j,key;
    for(i=1;i<n;i++) {
        key = arr[i];
        j=i-1;
        while (j>=0&&arr[j]>key) {
        arr[j+1]=arr[j];// i will move greater element ahead than key
        j=j-1;
        }
        arr[j+1]=key;// i will move key one postion up
    }
}

int main() {
    int arr[] = {25, 64, 12, 11, 22};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    insertSort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}
