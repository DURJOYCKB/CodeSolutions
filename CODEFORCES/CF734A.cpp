#include<iostream>
using namespace std;

int main(){
    int n, a=0, b=0;
    cin >> n;
    char arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
        if(arr[i] == 'A'){
            a++;
        } else {
            b++;
        }
    }
    if(a > b){
        cout << "Anton" << endl;
    } else if( a < b){
        cout << "Danik" << endl;
    } else {
        cout << "Friendship" << endl;
    }
    return 0;
}