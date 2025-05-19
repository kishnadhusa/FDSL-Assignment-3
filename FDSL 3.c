#include <stdio.h>

void bubbleSort(int array[], int length) {
    for (int i = 0; i < length - 1; i++) {
        for (int j = 0; j < length - i - 1; j++) {
            if (array[j] > array[j + 1]) {
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

void printArray(int array[], int length) {
    for (int i = 0; i < length; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int numberOfElements;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &numberOfElements);
    
    int array[numberOfElements];
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < numberOfElements; i++) {
        scanf("%d", &array[i]);
    }

    bubbleSort(array, numberOfElements);
    
    printf("Sorted array:\n");
    printArray(array, numberOfElements);

    return 0;
}
