#include <stdio.h>

// Function to perform Binary Search
int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if the key is present at the middle
        if (arr[mid] == key) {
            return mid; // Return the index if the key is found
        }

        // If the key is smaller, ignore the right half
        else if (arr[mid] > key) {
            high = mid - 1;
        }

        // If the key is larger, ignore the left half
        else {
            low = mid + 1;
        }
    }

    return -1; // Return -1 if the key is not found
}

int main() {
    int arr[] = {11, 12, 22, 25, 64};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 22;

    printf("Original array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Applying Binary Search
    int result = binarySearch(arr, 0, n - 1, key);

    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found in the array\n", key);
    }

    return 0;
}