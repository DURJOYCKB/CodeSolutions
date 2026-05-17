#include <iostream>
using namespace std;
int main() {
    int t;
    cin >> t;

    while(t--) {
        long long n, x, y, k;
        cin >> n >> x >> y >> k;

        long long diff = abs(x - y);
        long long dist = min(diff, n - diff);

        if(n <= 3) {
            cout << 1 << endl;
        }
        else {
            cout << dist + k << endl;
        }
    }
    return 0;
}