#include<iostream>
using namespace std;
int main(){
    int w, n, k, s=0;
    cin >> k >> n >> w;
    for(int i=1; i<=w; i++){
        s = s + (i*k);
    }
    if(s>=n){
        cout << s-n << endl;
    } else {
        cout << 0 << endl;
    }
    
    return 0;
}