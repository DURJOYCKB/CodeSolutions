#include<iostream>
using namespace std;
int main(){
    int t, h[101], a[101];
    cin >> t;
    for(int i=1, j=1; i<= t; i++, j++){
        cin >> h[i] >> a[j];        
    }
    int flag=0;
    for(int i=1, j=1; i<= t; i++, j++){
        for(int j=1; j<=t; j++){
            if(h[i] == a[j]){
                flag++;
            }
        }
                
    }
    cout << flag << endl;
    return 0;
}