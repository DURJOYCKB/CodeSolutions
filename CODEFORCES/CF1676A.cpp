#include<iostream>
using namespace std;
int main(){
    int x;
    int s, m;
    cin >> x;
    while(x--){
        int f=0, e=0;
        cin >> s;
        m = s/1000;
        for(int i=0; i<3; i++){
            e = e + (s%10);
            s = s/10;
            f = f + m%10;
            m = m / 10;
        }
        
        if(f == e)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}