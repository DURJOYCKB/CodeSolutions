#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t, n, k, arr[100001];
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(k == 1){
            if(is_sorted(arr, arr+n)){
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
        else {
            cout << "YES" << endl;
        }
    }
    
    return 0;
}