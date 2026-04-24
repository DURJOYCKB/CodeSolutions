#include<iostream>
using namespace std;
int main(){
    int n, a, flag=0;
    cin >> n;
    int arr[2*n];
    for(int i =0; i<2*n; i++){
        cin >> arr[i];
    }
    for(int i=0; i<2*n; i++){
        if(arr[i] == arr[i+2]){
            flag++;
        }
    }
    cout << flag << endl;
    return 0;
}