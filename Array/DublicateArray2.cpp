#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
    unordered_set<int> s;
    vector<int> duplicates;

    for (int temp : arr) {
        if (s.find(temp) != s.end()) {
            duplicates.push_back(temp);  // Collect duplicate values
        } 
        s.insert(temp);
    }
    
    return duplicates;  // Return vector of duplicates instead of a single int
}

int main() {
    vector<int> arr = {2, 3, 1, 2, 3};
    vector<int> result = findDuplicates(arr);

    // Print the duplicates
    for (int num : result) {
        cout << num << " ";
    }
    return 0;
}
