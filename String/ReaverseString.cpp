#include <iostream>
#include <cstring> // For strcmp
using namespace std;

bool CheckPalindrome(char name[], int n) {
    int s = 0;
    int end = n - 1;

    while (s < end) {
        if (name[s] != name[end]) {
            return false;
        }
        s++;
        end--;
    }
    return true;
}

void Reverse(char name[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(name[start++], name[end--]);
    }
}

int GetLength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[100];

    cout << "Enter your name: ";
    cin >> name;

    cout << "Your name is: " << name << endl;

    int len = GetLength(name);
    cout << "Length is: " << len << endl;

    if (CheckPalindrome(name, len)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    Reverse(name, len);
    cout << "Reversed String is: " << name << endl;

    return 0;
}
