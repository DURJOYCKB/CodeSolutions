#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    int d = (240 -k);
    int i, s=0;
    for(i=1; i<=n; i++){
        s = s+5*i;
        if(s > d){
            break;
        }
    }
    
    cout << i-1 << endl;
    return 0;
}