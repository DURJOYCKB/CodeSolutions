#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string a, b;
    a = "abc";
    while(t--){
        cin >> b;
        int count=0;
        if(b[0] != a[0])count++;
        if(b[1] != a[1])count++;
        if(b[2] != a[2])count++;

        if(count > 2){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
    return 0;
}