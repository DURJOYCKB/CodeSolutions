#include<iostream>
using namespace std;
int main(){
    int i;
    for(int j=0; j>=0; j++){
        cin >> i;
        if(i == 42){
            break;
        }
        cout << i << endl;
    }
    return 0;
}