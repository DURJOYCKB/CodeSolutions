#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n], brr[n];
    for(int i=1; i<=n; i++){
        cin >> arr[i];

    }
    for(int i=1; i<=n; i++){
        brr[arr[i]] = i;
        
    }
    for(int i=1; i<=n; i++){
        cout<< brr[i] << " " ;
        
    }
    return 0;
}