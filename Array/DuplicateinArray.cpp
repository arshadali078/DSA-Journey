#include <iostream>
#include <vector>
#include <cmath> // For abs()

using namespace std;

vector<int> Duplicate(vector<int>& arr, int n) {
    vector<int> ans;

    for (int i = 0; i < n; i++) {
        int index = abs(arr[i]); // Use absolute value to handle negative marking
        // if (index - 1 < 0 || index - 1 >= n) { 
        //     // Skip invalid indices to prevent out-of-bounds errors
        //     continue;
        // }

        if (arr[index - 1] < 0) {
            // If the value at index is already negative, it's a duplicate
            ans.push_back(index);
        } else {
            // Mark the value at index as negative to track it
            arr[index - 1] *= -1;
        }
    }

    return ans; // Return the vector of duplicates
}

int main() {
    vector<int> arr = {6, 7, 4, 8, 9, 10, 5, 19, 10}; // Correct initialization
    int n = arr.size(); // Get the size of the vector

    vector<int> duplicates = Duplicate(arr, n); // Call the function

    cout << "Duplicate Elements are: ";
    for (int num : duplicates) { // Iterate through the vector to print duplicates
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
