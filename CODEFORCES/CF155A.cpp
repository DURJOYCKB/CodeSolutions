#include<iostream>
using namespace std;
int main(){
    int n, a;
    cin >> n;
    int b ,w, count=0;
    cin >> a;
    b = a;
    w = a;
    for(int i=1; i<n; i++){
        cin >> a;
        if(a > b){
            b = a;
            count++;
        } else if (a < w){
            w = a;
            count++;
        }
    }
    cout << count << endl;
    return 0;
}