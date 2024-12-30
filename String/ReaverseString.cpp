#include<iostream>
using namespace std;

void Reverse(char name[], int n) {
    int start = 0;
    int end = n - 1;

    while (start < end) {
        swap(name[start++], name[end--]);
    }
}

int Getlength(char name[]) {
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++) {
        count++;
    }
    return count;
}

int main() {
    char name[20];

    cout << "Enter your name:" << endl;
    cin >> name;

    cout << "Your name is:" << endl;
    cout << name << endl;

    int len = Getlength(name);
    cout << "Length is: " << len << endl;

    Reverse(name, len);

    cout << "Reversed String is: " << name << endl;

    return 0;
}
