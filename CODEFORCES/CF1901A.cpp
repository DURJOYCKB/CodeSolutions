#include<iostream>
using namespace std;
int main(){
    int t, n, x, arr[10001];
    cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        int mx = arr[0];

        for(int i=0; i<n-1; i++){
            mx = max(mx, arr[i+1] - arr[i]);
        }

        mx = max(mx, 2 * (x - arr[n-1]));
        cout << mx << endl;
    }
    return 0;
}