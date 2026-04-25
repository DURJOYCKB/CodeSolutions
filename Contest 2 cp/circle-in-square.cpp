#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main() {
    int t;
    double r;
    double pi = 2 * acos(0.0);

    cin >> t;
    for (int i = 1; i <= t; i++) {
        cin >> r;

        double c = pi * r * r;
        double s = (2 * r) * (2 * r);

        cout << "Case " << i << ": "<< fixed << setprecision(2) << (s - c) << endl;
    }

    return 0;
}