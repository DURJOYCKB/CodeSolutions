#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    if(n >= 1 && n<=3){
        cout << "Initial" << endl;
    } else if(n >= 4 && n<=6){
        cout << "Average" << endl;
    } else if(n >= 7 && n<=9){
        cout << "Sufficient" << endl;
    }
    else {
        cout <<"High"<< endl;
    }
    return 0;
}