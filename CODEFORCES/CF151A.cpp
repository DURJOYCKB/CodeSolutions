#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, k, l, c, d, nl, p, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    int x= (k*l)/nl;
    int y = c*d;
    int z= p/np;
    cout << min({x, y, z})/n << endl;
    return 0;
}