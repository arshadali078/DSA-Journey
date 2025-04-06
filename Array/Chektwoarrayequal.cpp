#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int areArraysEqual(vector<int>& arr1, vector<int>& arr2){

    if( arr1.size() != arr2.size()){
        return false;
    }

    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());

    for(int i=0; i<arr1.size(); i++){
        if( arr1[i]  != arr2[i]){
            return false;
        }

    }
    return true;

}
int main(){
    vector<int> a = {3, 1, 2, 4};
    vector<int> b = {4, 3, 2, 1};

    if (areArraysEqual(a, b)) {
        cout << "Arrays are equal after sorting." << endl;
    } else {
        cout << "Arrays are NOT equal." << endl;
    }

    return 0;

}