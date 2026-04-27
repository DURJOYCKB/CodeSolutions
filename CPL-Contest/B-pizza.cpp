#include<iostream>
using namespace std;
int main(){
    int t, n, x;
    cin >> t;
    while(t--){
        cin >> n >> x;
        int c = n*x;
        
        cout << (c+3)/ 4 << endl;
        
    }
    return 0;
}