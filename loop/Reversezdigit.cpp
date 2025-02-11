#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Num:"<<endl;
    cin >> n;

    int rev=0;
    while( n != 0){
        int LastDigit= n%10;
         rev*=10;
         rev+=LastDigit;
         n/=10;
    }
    cout<<"Reverse Digit :"<<rev<<endl;
}