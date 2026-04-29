#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        if(n >= 67 && n<= 45000){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }
    return 0;
}