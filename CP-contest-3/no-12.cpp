#include<iostream>
using namespace std;
int main(){
    int n, c, x, y;
    cin >> n;
    while(n--){
        cin >> c >> x >> y;
        cout << (c-x)*y << endl;
    } 
    return 0;
}