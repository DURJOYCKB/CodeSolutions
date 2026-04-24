#include <iostream>
#include <climits>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[100];

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int max1 = INT_MIN, max2 = INT_MIN;
    int idx1 = -1, idx2 = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            idx2 = idx1;

            max1 = arr[i];
            idx1 = i;
        }
        else if (arr[i] > max2) {
            max2 = arr[i];
            idx2 = i;
        }
    }
    cout << idx2 + 1 << endl;

    return 0;
}