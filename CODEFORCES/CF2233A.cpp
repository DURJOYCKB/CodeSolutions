#include<iostream>
using namespace std;
int main(){
    int t, n, x, y, z;
    cin >> t;
    while(t--){
        cin >> n >> x >> y >> z;
        int d = (n+(x+y)-1)/(x+y);
        int f = n - x*z;
        int c = ((f+(x+10*y)-2)/(x+10*y))+z;

        cout << min(d, c) << endl;
    }
    return 0;
}