#include<iostream>
using namespace std;

 void PrintArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";

    }
    cout<<endl;
 }

 void Swapalternate(int arr[], int size){
    for(int i=0;i<size;i+=2){
        if(i+1 < size){
            swap(arr[i],arr[i+1]);
        }

    }
 }
int main(){
    int even[8]={6,5,8,3,9,6,75};
    int odd[5]={5,4,98,4,2};

     Swapalternate(even,8);
    PrintArray(even,8);
   

    cout<<endl;
     Swapalternate(odd,5);
     PrintArray(odd,5);
   



}