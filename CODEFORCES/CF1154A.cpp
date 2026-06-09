#include<iostream>
using namespace std;
int main(){
    int i, x[1011], max=INT16_MIN;
    for(i=0; i<4; i++){
        cin >> x[i];
        if(x[i] > max) max= x[i];
    }
    for(int i=3; i>=0; i--){
        if(x[i] == max) continue;
        cout << max-x[i] << " ";
    }
    return 0;
}