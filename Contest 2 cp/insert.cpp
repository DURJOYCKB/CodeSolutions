#include<iostream>
using namespace std;
int main(){
    int n, k, x;
    cin >> n >> k >> x;
    int arr[101];
    for(int i=1; i<=n; i++){
        cin >> arr[i];
    }
     for (int i = n; i >= k + 1; i--) {
        arr[i + 1] = arr[i];
    }
    arr[k+1] = x;
    for(int i=1; i<=n+1; i++){
        cout << arr[i] << " ";
    }
    return 0;
}