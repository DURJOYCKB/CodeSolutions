#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t >> n;
    int d = t+n;
    if(d >=9){
        cout << 0 << endl;
    }
    else {
        cout << t+n+1 << endl;
    }
    return 0;
}