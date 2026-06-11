#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string s;
    int u=0, l=0;
    cin >> s;
    for(int i=0; i<s.size(); i++){
        if(s[i] >= 97)l++;
        else u++;
    }
    if(l>=u){
        transform(s.begin(), s.end(), s.begin(), :: tolower);
    } else {
        transform(s.begin(), s.end(), s.begin(), :: toupper);
    }
    cout << s << endl;
    return 0;
}