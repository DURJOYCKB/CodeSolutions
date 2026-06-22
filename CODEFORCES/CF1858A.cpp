#include<iostream>
using namespace std;
int main(){
    int t, a, b, c;
    cin >> t;
    while(t--){
        cin >> a >> b >> c;
        int s1= (c+1)/2;
        int s2 = c/2;
        if(a+ s1 > b+s2){
            cout << "First" << endl;
        } else {
            cout << "Second" << endl;
        }
    }
    return 0;
}