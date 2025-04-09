#include<iostream>
#include<string>
using namespace std;


string  CountChar(const string& input){
    string result=" ";
    int count=1;

    for(int i=1; i< input.length(); i++){
         if( i < input.length() && input[i] == input[i-1]){
            count++;
         } else {
            result+= to_string(count ) + input[i-1];
            count=1;
         }
    }
    return result;

}
int main(){
    string input;
     cout<<" Enter the input"<<endl;
     cin>> input;

     string compare=CountChar(input);

     cout<<" char is a:-"<<compare<<endl;



}