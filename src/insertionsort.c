#include <math.h>
#include <stdio.h>

// Insertion sort function

void insertionSort(int A[], int n) {
    int i, j, key;
    for (j = 1; j < n; j++) {
        key = A[j];
        printf("Index j: %d\nkey: %d\n", j, key);
        
        // Insert A[j] into the sorted sequence A[0..j-1]
        i = j - 1;
        while (i >= 0 && A[i] > key){
            A[i + 1] = A[i];
            i = i - 1;
            printf("Index i: %d\nA[i + 1]: %d\n", i, A[i + 1]);
        }
        A[i + 1] = key;
    }
}

// Function to print the array "A" of size n
void printArray(int A[], int n){
    int j;
    for (j = 0; j < n; j++){
        printf("%d ", A[j]);
    }
    printf("\n");
}

// Driver program to test insertion sort 

int main (){
    int A[] = {20, 25, 35, 40, 44, 55, 38, 99, 10, 65, 50};
    int n = sizeof(A) / sizeof(A[0]);

    printf("\nRight before the insertion sort program has been started\n");
    printArray(A, n);

    insertionSort(A, n);

    printf("\nRight after the insertion sort program has been finished\n");
    printArray(A, n);

    return 0;
}