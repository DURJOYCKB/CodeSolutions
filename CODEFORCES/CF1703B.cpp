#include<iostream>
#include<set>
using namespace std;
int main(){
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        set<int> x;

        for(int i=0; i<s.size(); i++){
            
            x.insert(s[i]);
        }
        cout << (x.size()*2)+(n-x.size()) << endl;
    }
    return 0;
}