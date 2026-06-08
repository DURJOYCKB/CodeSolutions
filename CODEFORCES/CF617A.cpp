#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin >> n;
    while(n>0){
        if(n > 5){
            n-=5;
            count++;
        } else {
            n = n-n;
            count++;
        }
    }
    cout << count << endl;
    return 0;
    
}