#include<iostream>
using namespace std;
int main(){
    int t, n, k, x;
    cin >> t;
    while(t--){
        bool y = false;
        cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> x;
            if(x == k) y= true;
        }
        if(y)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}