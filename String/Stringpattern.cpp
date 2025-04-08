#include<iostream>
using namespace std;
int main(){

    string input="aabbccdd";
    string output="";

    int groupcount=input.length()/2;

    for(int i=0; i< input.length(); i+=2){

        output+=input.substr(i,2);

        int groupindex=i/2;
        int dotinput;

        if( groupindex< 2)
             dotinput=4;
        
        else if( groupindex ==2)
            dotinput=3;
        else
            dotinput=0;

            output+=string(dotinput,'.');

        
       


    }
    cout<<output<<endl;
   
   
}