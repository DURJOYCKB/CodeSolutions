#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int t, a, b;
    cin >> t;
    while(t--){
        cin >> a >> b;
        int c=1;
        for(int i=0; i<b; i++){
            c = a*a;
        }
        cout << c % 10 << endl;
    }
    return 0;
}