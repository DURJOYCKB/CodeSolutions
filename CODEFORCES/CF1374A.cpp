#include<bits/stdc++.h>
using namespace std;
int main(){
    int t, x, y, n;
    cin >> t;
    while(t--){
        cin >> x >> y >> n;
        int d = (n-y) / x;
        int k = d*x + y;
        cout << k << endl;

    }
    return 0;
}