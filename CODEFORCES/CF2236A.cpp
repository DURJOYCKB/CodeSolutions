#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, n, h[10001];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> h[i];
        }
        int mx = *max_element(h, h+n);
        int mn = *min_element(h, h+n);
        cout << (mx+1)-mn << endl;
    }
    return 0;
}