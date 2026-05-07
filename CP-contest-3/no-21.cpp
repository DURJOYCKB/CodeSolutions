#include<iostream>
using namespace std;
int main(){
    int t, n, m;
    cin >> t;
    while(t--){
        cin >> n >> m ;
        cout << (n/10)*m << endl;
    }
    
    return 0;
}