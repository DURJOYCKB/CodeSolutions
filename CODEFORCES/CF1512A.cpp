#include<iostream>
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int arr[101];
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int c;

        if(arr[0] == arr[1])
            c = arr[0];
        else
            c = arr[2];

        for(int i = 0; i < n; i++) {
            if(arr[i] != c) {
                cout << i + 1 << endl;
                break;
            }
        }
    }
    return 0;
}