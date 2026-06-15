#include<iostream>
using namespace std;
int main(){
    int t, n,arr[10001];
    cin >> t;
    while(t--){
        cin >> n;
        int curr=0, ans= 0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            if(arr[i] == 1)curr=0;
            if(arr[i] == 0){
                curr++;
                if(curr > ans)ans = curr;
            }
        }
        cout << ans << endl;
    }
    return 0;
}