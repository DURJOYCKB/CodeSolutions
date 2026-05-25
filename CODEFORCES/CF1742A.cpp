#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, a, b, c, s=0;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int m = max({a, b, c});
        s = a + b + c;
        if(s - 2*m == 0){
            cout << "Yes" << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}