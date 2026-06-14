#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, a, b, c; 
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        cout << (a+b+c)-mx-mn << endl;
    }
    return 0;
}