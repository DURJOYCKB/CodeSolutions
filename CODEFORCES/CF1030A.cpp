#include<iostream>
using namespace std;
int main(){
    int n, i, count =0;
    cin >> n;
    while(n--){
        cin >> i;
        if(i != 0){
            count++;
        }
    }
    if(count == 0){
        cout << "EASY" << endl;
    } else {
        cout << "HARD" << endl;
    }
    return 0;
}