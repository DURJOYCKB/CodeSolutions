#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int count = 0;

    while(n) {
        int d = n % 10;
        if(d == 4 || d == 7) count++;
        n /= 10;
    }

    if(count == 0) {
        cout << "NO";
        return 0;
    }

    int temp = count;
    while(temp) {
        int d = temp % 10;
        if(d != 4 && d != 7) {
            cout << "NO";
            return 0;
        }
        temp /= 10;
    }

    cout << "YES";
}