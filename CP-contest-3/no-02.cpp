#include<iostream>
using namespace std;
int main(){
    int n, x, a;
    cin >> n >> x >> a;
    if(n >= x && n<=a){
        cout << "YES" << endl;
    }
    else {
        cout <<"NO"<< endl;
    }
    return 0;
}