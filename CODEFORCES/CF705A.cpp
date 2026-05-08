#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    string s, m;
    s = "I hate ";
    m = "I love ";
    for(int i=1; i<=n; i++){
        
        if(i % 2 == 1){
            cout << s ;
        } else {
            cout << m;
        }
        if(i != n){
            cout << "that ";
        }
    }
    cout << "it "<< endl;
    return 0;
}