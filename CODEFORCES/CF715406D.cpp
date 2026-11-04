#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string a, b;
        cin >> n >> a;

        for (int i = 0; i < n; ){
            b += a[i];
            int j = i + 1;
            while(a[j] != a[i]){
                j++;
            }
            i = j+1;
        }
        cout << b << endl;
    }
    return 0;
}