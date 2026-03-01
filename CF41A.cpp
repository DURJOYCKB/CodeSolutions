#include<iostream>
using namespace std;
int main(){
    int i , j, flag= 0;
    string s, t;
    cin >> s >> t;

    for(i = 0,j = t.length()-1;i<s.length();i++,j--){
        if(s[i] != t[j]){
            flag ++;
        } 
    }
    
    if(flag == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}