#include<iostream>
using namespace std;
int main(){
    int h, w;
    cin >> h >> w;
    int arr[h][w];
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0; i<h; i++){
        for(int j=0; j<w; j++){
           if(arr[i][j] != 0){
            cout << char((arr[i][j]) + 64);
           } else {
            cout << ".";
           }
        }
        cout << endl;
    }
    return 0;
}