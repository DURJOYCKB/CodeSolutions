#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=1, a=1; i<=n; i++){
           
            for(int j=1; j<=n; j++){
                cout << a << " ";
                a = a+j;
            }
            a = 1;;
            a = a+i+i;
            cout << endl;
            
            
        }
    }
}