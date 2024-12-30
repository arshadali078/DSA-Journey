#include<iostream>
using namespace std;

int Dublicateremove(int arr[], int n){
    int ans=0 ;
    for(int i=0; i<n;i++){
        ans = ans ^ arr[i];
    }
    return ans;
}
int main(){
    int arr[]={4,5,3,5,3,9,8,6};

    cout << "uniqe element is :-" << Dublicateremove(arr,8) << endl;
}