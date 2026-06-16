#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        int a =1;
        for(int i=0; i<n; i++){
            if(a % 3 == 0 || a % 10 == 3){
                i = i-1;
            }
            a++;
        }
        cout << a-1 << endl;
    }
    return 0;
}