#include<iostream>
using namespace std;
int main(){
    int n, k;
    cin >> n >> k;
    for(int i=1; i> 0; i++){
        int d = n*i;
        if((d-k) % 10 == 0 || (d) % 10 == 0){
            cout << i << endl;
            break;
        }
    }
    return 0;
}