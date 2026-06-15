#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, arr[10001];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    int mx = *max_element(arr, arr+n);
    int s =0;
    for(int i=0; i<n; i++){
        s = s+ (mx - arr[i]);
    }
    cout << s << endl;
    return 0;
}