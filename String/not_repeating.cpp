#include<iostream>
#include<string>
using namespace std;
char nonrep(string &s){

    int n=s.length();

    for(int i=0; i<n;i++){
        bool found=false;

        for(int j=0; j<n;j++){
            if( i !=j  && s[i] == s[j]){
                found=true;
            }
        }
        if(!found){
            return s[i];
        }
    }
    return '$';

}
int main(){
    string s="maame";

    cout<<"non repeating charcer is a:"<<nonrep(s);
}
