#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, n, arr[10001];
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        sort(arr, arr+n);
        bool y = true;
        for(int i=0; i<n-1; i++){
            if(abs(arr[i]-arr[i+1]) > 1){
                y=false;
                break;
            } 
        }
        if(y)cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;

}