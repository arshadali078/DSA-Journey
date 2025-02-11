#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a Number:"<<endl;
    cin >> n;
    int sum = 0;

    while( n!=0){
        int LastDigit= n % 10;
         n/=10;
        sum += LastDigit;
    }
    cout<<"Sum is:"<<sum<<endl;
}