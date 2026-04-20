#include<iostream>
using namespace std;

int main(){
    int T, x;
    cin >> T;
    while(T--){
        cin >> x;
        if(x <= 10){
            cout << "YES" << endl;
        } else {
            cout << "NO"<< endl;
        }
    }
    
   
    return 0;

}