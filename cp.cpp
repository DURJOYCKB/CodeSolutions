#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    char oldChar, newChar;

    cin >> s;
    cin >> oldChar >> newChar;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == oldChar)
            s[i] = newChar;
    }

    cout << s;
    return 0;
}
