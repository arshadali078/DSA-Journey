#include<iostream>
using namespace std;


int Sum( int a, int b){
    return a + b;
}
int main(){

    int a;
    cout<<"Enter a number:"<<endl;
    cin >> a;
    int b;

    cout <<"Enter a Second Num:"<<endl;
    cin >> b;

    Sum( a,b);

    cout<<"Sum is a:"<<Sum(a,b)<<endl;
}