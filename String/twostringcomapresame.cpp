#include <iostream>
#include <unordered_map>
using namespace std;

bool areSameCharacters(string s1, string s2) {
    if (s1.length() != s2.length())
        return false;

    unordered_map<char, int> count1, count2;

    for (char c : s1)
        count1[c]++;

    for (char c : s2)
        count2[c]++;

    return count1 == count2;
}

int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;

    cout << "Enter second string: ";
    cin >> str2;

    if (areSameCharacters(str1, str2))
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;

    return 0;
}
