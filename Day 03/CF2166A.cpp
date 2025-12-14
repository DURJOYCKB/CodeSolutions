#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;
        cin >> n >> s;

        char last = s[n - 1];
        int operations = 0;

        for (int i = 0; i < n - 1; i++) {
            if (s[i] != last) {
                operations++;
            }
        }

        cout << operations << "\n";
    }

    return 0;
}
