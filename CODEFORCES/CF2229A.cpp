#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        int mn = INT16_MAX;
        int mx = INT16_MIN;

        for(int i = 0; i < n; i++) {
            int x;
            cin >> x;

            mn = min(mn, x);
            mx = max(mx, x);
        }

        cout << (mx - mn + 1) / 2 << endl;
    }

    return 0;
}