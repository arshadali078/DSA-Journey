#include<iostream>
using namespace std;

int  Arraysum(int arr[], int n){
     int sum=0;

     for(int i=0;i<n;i++){
        sum+=arr[i];
     }
     return sum;
}
int main(){
    int arr[7]={5,9,8,5,4,-7,9};
   

     Arraysum(arr,7);

     cout<<"Sum of element in array:-"<<Arraysum(arr,7)<<endl;
}