#include<iostream>
using namespace std;
int main(){
    int t, n, m, o;
    cin >> t;
    while(t--){
        cin >> n >> m >> o;
        cout << (o - m) / n << endl;
    }
    
    return 0;
}