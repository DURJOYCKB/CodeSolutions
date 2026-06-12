#include <iostream>
#include <string>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        string a;
        cin >> a;

        bool possible = true;

        for (int j = 0; j < k; j++) {
            int s = 0;
            for (int i = j; i < n; i += k) {
                if (a[i] == '1')
                    s++;
            }
            if (s % 2) {
                possible = false;
                break;
            }
        }
        cout << (possible ? "YES" : "NO") << '\n';
    }
    return 0;
}