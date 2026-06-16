#include<iostream>
using namespace std;
int main(){
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        int c =0;
        for(int i=0, j=s.size()-1; i<j; i++, j--){
            if(s[i] == '0' && s[j] == '1' || s[i]=='1' && s[j]== '0'){
                c++;
            } else {
                break;
            }
        }
        cout << n - (2*c) << endl;
    }
    return 0;
}