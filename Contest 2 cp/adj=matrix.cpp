#include<iostream>
using namespace std;
int main(){
    int n, a;

    cin >> n;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a;
            if(a == 1){
                cout << j << " ";
            }
        }
        cout << endl;
    }
    return 0;
}