#include<iostream>
using namespace std;
int main(){
    int t, flag=0;
    cin >> t;
    int arr[t];
    for(int i=0; i<t; i++){
        cin >> arr[i];
    }
    for(int i=0; i<t; i++){
        if(arr[i] >= arr[i+1]){
            flag = 1;
        }
    }
    if(flag == 1){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
    }
    return 0;
}