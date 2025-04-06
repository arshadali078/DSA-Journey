#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &arr, int n) {
    int total = n * (n + 1) / 2;
    int sum = 0;

    for (int num : arr) {
        sum += num;
    }

    return total - sum;
}

int main() {
    vector<int> arr = {1, 2, 4, 5};  // missing 3
    int n = 5;

    cout << "Missing number is: " << missingNumber(arr, n) << endl;

    return 0;
}
