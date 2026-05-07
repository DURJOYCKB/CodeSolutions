#include<iostream>
using namespace std;
int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if(abs(b-a) == abs(d-c)){
        cout << "No" << endl;

    } else {
        cout << "Yes" << endl;
    }
    return 0;

}