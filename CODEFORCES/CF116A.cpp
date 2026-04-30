#include<iostream>
using namespace std;
int main(){
    int n,a,b,p=0, flag=0;
    cin >> n ;
    while(n--){
        cin >> a >> b;
        
        p=p-a;
        p=p+b;
        if(p > flag){
            flag = p;
        }
    }
    cout << flag << endl;
    return 0;
}