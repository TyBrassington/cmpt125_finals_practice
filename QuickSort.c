#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int partition(int *set, int start, int end) {
    int pivotValue = set[end]; /* end is the pivot */
    int pivotIndex = start; /* Index of the smaller element */
    for (int i = start; i < end; i++) {
        if (set[i] <= pivotValue) {
            swap(&set[i], &set[pivotIndex]);
            pivotIndex++;
        }
    }
    swap(&set[pivotIndex], &set[end]); /* Put pivot in the right place */
    return pivotIndex; /* Return the partition point */
}
int iteration = 0;
void quickSort(int arr[], int low, int high){
    if (low < high){
        int partitionIndex = partition(arr, low, high);
        if (iteration++ > 7){
            return;
        }
        quickSort(arr, low, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, high);
    }
}

/*int main(){
    int arr[10] = { -1, 12, 34, 26, 7, 88, 65, 34, 19, 42 };
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
    quickSort(arr, 0, n-1);
    for (int i = 0; i < 10; i++){
        printf("%d ", arr[i]);
    }
}*/
