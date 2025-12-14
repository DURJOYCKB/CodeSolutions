#include<iostream>
#include<string>
using namespace std;

int main(){
    int t, a, b, c, d;
    cin >> t;
    while(t--){
        cin >> a >> b >> c >> d;
        if(a == b && b == c && c == d && d == a){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    return 0;
    
}