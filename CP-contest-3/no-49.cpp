#include<iostream>
using namespace std;
int main(){
    int n, m;
    cin >> n >> m;
    int x = n+1;
    if(x / m >=2 ){
        cout << "Yes" << endl;
    } 
    else {
        cout << "No"<< endl;
    }
    return 0;
}