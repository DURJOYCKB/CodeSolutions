#include<iostream>
using namespace std;
int main(){
    int t, n, arr[101], count=1;
    cin >> t;
    while(t--){
        cin >> n;
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        if(arr[0] % 2 == 1){
                arr[0]= arr[0]+1;
            } else {
                arr[0] = arr[0] /2 ;
            }
        for(int i=1; i<n; i++){
            while(arr[i] != arr[i-1]){
                if(arr[i] % 2 == 1){
                    arr[i]= arr[i]+1;
                } else {
                    arr[i] = arr[i] /2 ;
                }
                count++;
            }
        }
        
    }
    cout << count << endl;
    return 0;
}