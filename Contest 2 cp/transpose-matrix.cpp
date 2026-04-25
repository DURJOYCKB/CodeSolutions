#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n, a;

    cin >> n >> a;
    int arr[n][a], brr[a][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<a; j++){
            cin >> arr[i][j];
            brr[j][i] = arr[i][j];
        }
    }

    for(int i=0; i<a; i++){
        for(int j=0; j<n; j++){
            cout << brr[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}