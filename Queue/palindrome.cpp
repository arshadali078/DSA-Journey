#include<iostream>
#include<stack>
#include<queue>

using namespace std;


bool isPalindrome(queue<int> &q){

    stack<int> st;
    queue<int> temp=q;

    while(!temp.empty()){
        st.push(temp.front());
        temp.pop();

        
    }
    while(!q.empty()){
        int frontelemnt=q.front();
        int topelement=st.top();

        q.pop();
        st.pop();

        if(frontelemnt != topelement){
            return false;
        }
        return true;
    }
}
int main(){
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(2);
    q.push(1);

    if (isPalindrome(q))
        cout << "The queue is a palindrome." << endl;
    else
        cout << "The queue is NOT a palindrome." << endl;

    return 0;

    
}