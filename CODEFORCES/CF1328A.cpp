#include<iostream>
using namespace std;
int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        if(a % b != 0){
            int d = a/b;
            cout << b*(d+1) - a << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}