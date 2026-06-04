#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int d = (abs(a-b)+abs(a-c)+abs(b-c));
    cout << d/2 << endl;
    return 0;
}