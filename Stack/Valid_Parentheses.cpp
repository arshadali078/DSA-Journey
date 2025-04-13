#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;
    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) return false;
            if ((ch == ')' && st.top() != '(') ||
                (ch == '}' && st.top() != '{') ||
                (ch == ']' && st.top() != '['))
                return false;
            st.pop();
        }
    }
    return st.empty();
}

int main()
{
    string expr;
    cout << "Enter an expression: ";
    cin >> expr;
    
    if (isValid(expr)) {
        cout << "The expression has balanced parentheses.\n";
    } else {
        cout << "The expression does not have balanced parentheses.\n";
    }
    
    return 0;
}