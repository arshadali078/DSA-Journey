#include <iostream>
#include <vector>
#include <algorithm> // Required for sort
using namespace std;

void sortArray(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    
    cout << "Sorted array: ";
    for (int num : nums) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> arr = {3, 2, 5, 1}; // Use only integers
    
    sortArray(arr);

    return 0;
}
