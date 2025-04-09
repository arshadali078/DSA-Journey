#include <iostream>
#include <vector>
using namespace std;

// Yeh function do sorted arrays ko merge karta hai
vector<int> mergeSortedArrays(const vector<int>& a, const vector<int>& b) {
    vector<int> result;  // Resultant merged array
    int i = 0, j = 0;    // Do pointers - ek array 'a' ke liye aur ek 'b' ke liye

    // Jab tak dono arrays mein elements bache hain
    while (i < a.size() && j < b.size()) {
        if (a[i] < b[j]) {
            result.push_back(a[i]);  // a[i] chhota hai, usko result mein daalo
            i++; // pointer a ko aage badhao
        } else {
            result.push_back(b[j]);  // b[j] chhota hai, usko result mein daalo
            j++; // pointer b ko aage badhao
        }
    }

    // Agar array 'a' mein abhi bhi elements bache hain, to unhe result mein daal do
    while (i < a.size()) {
        result.push_back(a[i]);
        i++;
    }

    // Agar array 'b' mein abhi bhi elements bache hain, to unhe result mein daal do
    while (j < b.size()) {
        result.push_back(b[j]);
        j++;
    }

    return result;  // Merged sorted array return karo
}

int main() {
    // Do sorted arrays
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};

    // Merge karna
    vector<int> merged = mergeSortedArrays(a, b);

    // Output print karna
    cout << "Merged Sorted Array: ";
    for (int num : merged) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
