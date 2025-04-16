#include<iostream>
#include<vector>
using namespace std;
int removeElement(vector<int>& arr, int ele){
    int n=arr.size();
    int k=0;
    for(int i=0;i<n;i++){
        if( arr[i] != ele){
            arr[k]=arr[i];
            k++;
        }
        
    }
    return k;
}
int main(){

    vector<int> arr = {0, 1, 3, 0, 2, 2, 4, 2};
    int ele = 2;
    cout << removeElement(arr, ele) << endl;
    return 0;
}