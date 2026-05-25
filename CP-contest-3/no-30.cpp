#include<iostream>
using namespace std;
int main(){
    int t, a,  temp=0, flag=0;
    cin >> t;
    for(int i=0; i<t; i++){
        cin >> a;
        if(temp > a){
            flag=1;
        }
        temp = a;
    }
    if(flag == 1){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;

}