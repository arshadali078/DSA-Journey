#include<iostream>
using namespace std;

int fact(int x){
    int f=1;

    for(int i=1; i<=x;i++){
        f=f*i;
    }
    return f;
}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin >> n;


    int r;
    cout<<"Enter the number:"<<endl;
    cin >> r;


    int a=fact(n);
    int b=fact(n-r);

    cout<<"permutation is a:"<<a/b<<endl;
}