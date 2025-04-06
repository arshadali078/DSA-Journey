#include <iostream>
using namespace std;

void leftRotateByOne(int arr[], int n) {
    int temp = arr[0];
    for(int i = 0; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[n - 1] = temp;
}

void printArray(int arr[], int n) {
    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    leftRotateByOne(arr, n);

    cout << "Array after one left rotation: ";
    printArray(arr, n);

    return 0;
}
