#include <iostream>
#include <vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int n = nums.size();
    int j = 0;

    // Move all non-zero elements to the front
    for (int i = 0; i < n; i++) {
        if (nums[i] != 0) {
            nums[j] = nums[i];
            j++;
        }
    }

    // Fill the remaining elements with 0
    for (int i = j; i < n; i++) {
        nums[i] = 0;
    }
}

int main() {
    vector<int> arr = {4, 0, 7, 8, 0, 6, 0};

    moveZeroes(arr);  // Don't assign return value, function is void

    cout << "After moving zeroes: ";
    for (int val : arr) {
        cout << val << " ";
    }

    return 0;
}
