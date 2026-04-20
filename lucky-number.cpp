#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int d = n % 10;
    if(d == 4 || d == 7){
        cout << "YES" << endl;
    }
    else if(n % 4 == 0 || n % 7 == 0){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
   
    return 0;

}