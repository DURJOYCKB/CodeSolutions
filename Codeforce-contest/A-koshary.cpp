#include<iostream>
using namespace std;
int main(){
    int t, x, y;
    cin >> t;
    while(t--){
        cin >> x >> y;
        if(x % 2 != 0 && y % 2 != 0){
            cout << "No" << endl;
        } else {
            if((x % 2 ==0 || y % 2 == 1)||(x % 2 == 1 || y % 2== 0)){
                cout << "Yes" << endl;
            }
        }
    }
    return 0;
}