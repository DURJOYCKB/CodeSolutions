#include<iostream>
using namespace std;
int main(){
    int t, n;
    string s;
    cin >> t;
    while(t--){
        cin >> n;
        cin >> s;
        int c=0, p=0, m=0;
        for(int i=0; i<n; i++){
            if(s[i] == '*'){
                p = (c+1)/2;
                m = max(p, m);
                c = 0; 
                
            } else {
                c++;
            }
               
        }
        p = (c+1)/2;
        m = max(m, p);
        
        cout << m << endl;
    }
    return 0;
}