#include<iostream>
using namespace std;
int main(){
    int t, n;
    char c;
    cin >> t;
    while(t--){
        int c1= 0, c2=0;
        cin >> n;
        while(n--){
            
            cin >> c;
            if(c == '('){
                c1++;
            } else {
                c2++;
            }

        }
        if(c1 == c2){
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    return 0;
}