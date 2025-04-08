#include<iostream>
#include<vector>
using namespace std;

int Bubble(vector<int> & arr , int n){

    for(int i=0; i<n-1;i++){
        for( int j=0; j< n-i-1;j++){
            if( arr[j] > arr[j+1]){
                swap( arr[j], arr[j+1]);

                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                
            }

        }
    }
 

}

int Print(vector<int>& arr ,int  n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    vector<int> arr={4,2,6,1,0};

    int n=5;
    Bubble(arr, n);
    Print(arr,n);

    

}