#include <iostream>
using namespace std;

// Merging two sorted parts of the array
void merge(int arr[], int start, int mid, int end) {
    int n1 = mid - start + 1;
    int n2 = end - mid;

    // Create temp arrays
    int left[n1], right[n2];

    // Copy data
    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    // Merge temp arrays back into arr[]
    int i = 0, j = 0, k = start;

    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
        }
    }

    // Copy any remaining elements
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];
}

// Recursive Merge Sort
void mergeSort(int arr[], int start, int end) {
    if (start < end) {
        int mid = (start + end) / 2;

        // Sort left and right halves
        mergeSort(arr, start, mid);
        mergeSort(arr, mid + 1, end);

        // Merge them
        merge(arr, start, mid, end);
    }
}

int main() {
    int arr[] = {6, 3, 9, 5, 2, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    cout << "Sorted array using Merge Sort: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}
