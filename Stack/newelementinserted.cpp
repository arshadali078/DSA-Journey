#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> st;
    
    // Inserting element top of the stack
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    
    while(!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}
