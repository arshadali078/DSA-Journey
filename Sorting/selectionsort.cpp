#include<iostream>
using namespace std;

void selectionsort(int arr[], int n){
    for( int i=0; i<n-1;i++){
        int minindex=i;


        for(int j=i+1; j<n; j++){
            if( arr[j] < arr[minindex]){
                minindex=j;
            }

           

        }
        if( minindex != i){
            int temp= arr[i];
            arr[i]=arr[minindex];
            arr[minindex]=temp;
        }
    }
}
int main(){
    int arr[6]={7,4,8,2,1,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionsort(arr,n);

    cout<<" sort array using selection sort is a:-";

    for(int i=0; i<n;i++){
        cout<<arr[i]<<" ";
    }

}