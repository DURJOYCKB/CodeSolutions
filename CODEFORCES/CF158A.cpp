#include<iostream>
using namespace std;
int main(){
    int n, k, a[10001];
    cin >> n >> k;
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    int count=0;
    for(int i=0; i<n; i++){
        if(a[i] != 0 && a[i] >= a[k-1]){
            count++;
        }
    }
    cout << count << endl;
    return 0;

}