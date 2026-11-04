#include <bits/stdc++.h>
using namespace std;
int main() {
    int t, n;
    cin >> t;
    while (t--){
        cin >> n;
        int arr[101];
        int zero = 0;

        for (int i = 0; i < n; i++){
            cin >> arr[i];
            if (arr[i] == 0){
                zero++;
            }
        }

        if(arr[0] == 0 && arr[n - 1] == 0){
            cout << 0 << endl;
        }
        else if(zero < 2){
            cout << -1 << endl;
        }
        else if(arr[0] == 0 || arr[n - 1] == 0){
            cout << 1 << endl;
        }
        else {
            cout << 2 << endl;
        }
    }
    return 0;
}