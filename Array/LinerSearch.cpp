#include<iostream>
using namespace std;

bool search(int arr[],  int size, int key){
      for(int i=0;i<size;i++){
        if(arr[i]==key){
            return 1;
        }
      }
      return 0;
}
int main(){
    int arr[7]={5,-3,8,9,56,89,9};
    int key;

    cout << "Enter element search is:"<<endl;
    cin>> key;

    bool  found=search(arr,7,key);

    if(found ){
        cout << "key is prsent: " <<endl;
    } else 
    {
        cout << "key is absent:" <<endl;
        
    }
}