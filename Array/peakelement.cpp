#include <iostream>
using namespace std;

int find_peak_element(int arr[], int n) {
    if (n == 1) return arr[0];
    if (arr[0] >= arr[1]) return arr[0];
    if (arr[n - 1] >= arr[n - 2]) return arr[n - 1];

    for (int i = 1; i < n - 1; i++) {
        if (arr[i] >= arr[i - 1] && arr[i] >= arr[i + 1]) {
            return arr[i];
        }
    }

    return -1; // No peak (this case won't happen with the above logic)
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Peak Element: " << find_peak_element(arr, n) << endl;
    return 0;
}
