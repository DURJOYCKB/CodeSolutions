#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin >> n;
    int c = n% 10;
    n = n/10;
    while(n>0){
        int d = n % 10 ;
        n = n/10;
        if(c != d){
            count=1;
        }
    }
    if(count){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
   
    return 0;
}