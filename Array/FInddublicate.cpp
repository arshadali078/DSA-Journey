#include<iostream>
using namespace std;

int Finddublicate(int arr[], int n){
    int ans=0;

    for(int i=0; i<n;i++){
        ans=ans ^ arr[i];

    }
    for(int i=1; i<n;i++){
        ans=ans ^ i;
    }
    //return ans;
}
int main(){
    int arr[5]={5,6,7,5};
    int n=5;

    int result=Finddublicate(arr,n);
    //cout<<"unique element is a:-"<<result<<endl;

    cout<<"dublicate element is a:-"<<result<<endl;

}