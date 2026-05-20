#include<iostream>
#include<set>
using namespace std;
int main(){
    int n, p, q, a, b;
    set <int> s;
    cin >> n;
    cin >> p;
    while(p--){
        cin >> a;
        s.insert(a);
    }
    cin >> q;
    while(q--){
        cin >> b;
        s.insert(b);
    }
    if(s.size() == n){
        cout << "I become the guy." << endl;
    } else {
        cout << "Oh, my keyboard!" << endl;
    }
    return 0;
}