#include<iostream>
using namespace std;


bool printArray(int arr[][4], int n, int m, int target){

    for(int i=0; i<n;i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]== target){
                return 1;
            }

        }
    }
    return 0;

}
int main(){
     int arr[3][4];

// // taking input arrary in row wise
//      for(int i=0; i<3;i++){
//         for(int j=0; j<4;j++){
//             cin>> arr[i][j];
//         }
//      }
     
// taking input arrary in row wise
     for(int i=0; i<4;i++){
        for(int j=0; j<3;j++){
            cin>> arr[j][i];
        }
     }


     //print
     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout << arr[i][j] <<  " ";
     }
     cout<< endl;
     }


     // search in 2d array

     cout<<"Enter a Element for the search"<<endl;
     int target;
     cin>>target;

     if(printArray(arr, target, 3,4)){
        cout<< "Element found"<<endl;

     }
     else {
        cout<< "Element not found"<<endl;
     }


     return 0;
}