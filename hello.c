
#include <stdio.h>

// Function to print all unique elements in an array
void printUniqueElements(int arr[], int size) {
    printf("Unique elements in the array:\n");

    for (int i = 0; i < size; i++) {
        // Check if the current element is unique
        int j;
        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                break;
            }
        }

        // If the loop did not break, arr[i] is unique
        if (i == j) {
            printf("%d ", arr[i]);
        }
    }

    printf("\n");
}

int main(void) {
    // Example array
    int arr[] = {3, 1, 4, 2, 7, 2, 1, 4, 6};
    int size = sizeof(arr) / sizeof(arr[0]);

    // Call the function to print unique elements
    printUniqueElements(arr, size);

    return 0;
}


