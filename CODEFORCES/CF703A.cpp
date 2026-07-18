#include<iostream>
using namespace std;
int main(){
    int n, m, c, a=0, b=0;
    cin >> n;
    while(n--){
        cin >> m >> c;
        if(m > c)a++;
        if(c > m)b++;
    }
    if(a>b)cout << "Mishka" << endl;
    if(b>a)cout << "Chris" << endl;
    if(a == b)cout <<"Friendship is magic!^^" << endl;
    return 0;
}