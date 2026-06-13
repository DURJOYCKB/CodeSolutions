#include<iostream>
using namespace std;
int main(){
    int t;
    char c;
    string s = "codeforces";
    cin >> t;
    while(t--){
        bool y = false;
        cin >> c;
        for(int i=0; i<s.size(); i++){
            if(s[i] == c){
                y = true;
                
            }
        }
        if(y)cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}