#include<iostream>
using namespace std;
int main(){
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int cmm = 0;
        if(a == b) cmm = a;
        else cmm = c;
        if(cmm != a)cout << a << endl;
        else if(cmm != b)cout << b << endl;
        else cout << c << endl;
    }
    return 0;
}