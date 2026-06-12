#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, arr[1001];
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
   
    int mxInd= max_element(arr, arr+n)-arr;
    int mnInd = *min_element(arr, arr+n);
    int lastInd=-1;
    
    for(int i=0; i<n; i++){
        if(arr[i]==mnInd) lastInd=i;
    }
    int ans = mxInd+(n-1-lastInd);
    if(mxInd> lastInd) ans--;
    cout << ans << endl;
    return 0;
}