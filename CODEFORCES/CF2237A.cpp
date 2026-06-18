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
        int s =0;
        for(int i=0; i<n; i++){
            while(arr[i+1] > arr[i]){
                arr[i+1]--;
            }
            s += arr[i];

        }
        
        cout << s << endl;

    }
    return 0;
}