#include<iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    string a, b;
    while(t--){
        cin >> a >> b;
        int temp;
        temp = a[0];
        a[0] = b[0];
        b[0] = temp;
        cout << a <<" "<< b << endl; 
    }
    return 0;
}