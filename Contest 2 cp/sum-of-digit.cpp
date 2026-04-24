#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        int s = 0;
        cin >> n;
        for(int i=1; n>0;i++){
            int r = n%10;
            s = s+r;
            n = n/10;
        }
        cout << s << endl;
        
    }
    
    return 0;
}