#include<iostream>
#include<set>
#include<string>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    string st;
    getline(cin , st);
    set<char> s;
    for(char c : st){
        s.insert(tolower(c));
    }
    if(s.size() == 26){
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

    return 0;
    
}