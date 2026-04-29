#include<iostream>
using namespace std;
int main(){
    int n, x, a;
    cin >> n >> x;
    while(n--){
        cin >> a;
        if(a < x){
            cout << 1 << endl;
            x = a;
        }
        else {
            cout << 0 << endl;
        }
    }
    return 0;
}