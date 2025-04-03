#include <bits/stdc++.h>
using namespace std;

void rotateArr(vector<int>& arr, int d) {
    int n = arr.size();
    vector<int> temp(n);

    for (int i = 0; i < n; i++) {
        temp[i] = arr[(i + d) % n];  // Incorrect, shifting in the wrong direction
    }
    arr = temp;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int d = 2; // Rotate left by 2 positions

    rotateArr(arr, d);

    for (int i : arr) {
        cout << i << " ";
    }

    return 0;
}
