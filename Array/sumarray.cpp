#include <iostream>
#include <vector>
using namespace std;

int calculateSum(vector<int>& nums) {
    int sum = 0;
    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];
    }
    return sum;
}

int main() {
    vector<int> arr = {3, 2, 5, 1};
    
    int total = calculateSum(arr);
    
    cout << "Sum of array elements: " << total << endl;

    return 0;
}
