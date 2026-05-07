#include<iostream>
using namespace std;
int main(){
    int t, n, m;
   
    cin >> t >> n >> m ;
    if(t!= n && n == m){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    return 0;
}