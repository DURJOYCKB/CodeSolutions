#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        string s;

        cin >> n >> s;

        string T = "Timur";

        if (n != 5) {
            cout << "NO" << endl;
            continue;
        }

        sort(s.begin(), s.end());
        sort(T.begin(), T.end());

        if (s == T)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}