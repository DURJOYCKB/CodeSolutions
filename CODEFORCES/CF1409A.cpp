#include<iostream>
using namespace std;
int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        cout << ((max(a, b)-min(a, b))+9)/10 << endl;
    }
    return 0;
}