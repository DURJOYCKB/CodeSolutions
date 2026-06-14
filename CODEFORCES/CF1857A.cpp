#include<iostream>
using namespace std;
int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n;
        int s = 0;
        while(n--){
            cin >> x;
            s = s + x;
        }
        if(s%2 == 0){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
    }
    return 0;
}