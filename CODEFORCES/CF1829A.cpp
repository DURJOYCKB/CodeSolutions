#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s ="codeforces";
    string a;
    while(n--){
        int count=0;
        cin >> a;
        for(int i=0; i<a.size(); i++){
            if(a[i] != s[i])count++;
        }
        cout << count << endl;
    }
    return 0;
}