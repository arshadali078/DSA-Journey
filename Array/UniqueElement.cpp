#include<iostream>
using namespace std;



int FindUniqe(int arr[], int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans= ans ^ arr[i];

    }
    return ans;
}
int main(){
    int arr[]={6,5,6,8,5};

    cout<<"Unique Element in Array :-"<< FindUniqe(arr,5);
   // PrintArray(arr,5);






}
