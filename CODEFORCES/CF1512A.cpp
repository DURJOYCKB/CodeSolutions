#include<iostream>
using namespace std;
int main(){
    int t, n, arr[10001];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        for(int i=1; i<n-1; i++){
            if(arr[i] != arr[i-1] && arr[i] != arr[i+1]){
                cout << i+1 << endl;
            }
        }
    }
    return 0;
}