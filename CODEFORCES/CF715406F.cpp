#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[10001];

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int mn = a[0];

        for(int i=1; i<n; i++){
            mn = min(mn, a[i]);
        }
        if(a[0] > mn) cout << "Alice" << endl;
        else cout << "Bob" << endl;
    }
    return 0;
}