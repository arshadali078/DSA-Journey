
// C++ program to illustrate how to check if a stack is
// empty
#include<iostream>
#include<stack>
using namespace std;
int main(){


    stack<int> mystack;
    //cheking if arrya is emepay


    if( mystack.empty()){
        cout<<"stack is emepy \n";
    }else{
        cout<<"stack is not empty \n ";
    }

    //adding elements to the stack

    mystack.push(23);
    mystack.push(20);
    mystack.push(23);
    mystack.push(20);
  //again cheking if stack is empty

  if(mystack.empty()){
    cout<<"Afterupdation stack is empty \n";
  }else{
    cout<<" Affter updation stack is not empty \n";
  }
  return 0;
}