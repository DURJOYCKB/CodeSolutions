#include<iostream>
using namespace std;
int main(){
    int n, count=0;
    cin >> n;
    int candles[n];
    int max = INT8_MIN;
    for(int i =0; i<n; i++){
        cin >> candles[i];
        
        if(candles[i] >= max){
            max = candles[i];
        }
    }
    for(int i=0; i<n; i++){
        if(max == candles[i]){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}