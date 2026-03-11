#include<iostream>
#include<string>
using namespace std;

int main(){

    int flag = 0;
    string arr;
    cin >> arr;

    for(int i=0; i<arr.length(); i++){
        bool found = false;
        for(int j= 0; j< i; j++){
            if(arr[i] == arr[j]){
                found = true;
                break;
            }
        }
        if(!found)
            flag ++;
    }

    if(flag % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else {
        cout << "IGNORE HIM!" << endl;
    }
    return 0;
}