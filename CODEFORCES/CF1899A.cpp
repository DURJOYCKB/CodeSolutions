#include<iostream>
using namespace std;
int main(){
    int t, a;
    cin >> t;
    while(t--){
        cin >> a;
        if((a+1)%3 == 0 || (a-1)%3== 0){
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
    return 0;
}