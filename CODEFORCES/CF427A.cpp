#include<iostream>
using namespace std;
int main(){
    int n, a, s=0, c=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> a;
        if(a < 0){
            if(s == 0 ){
                c++;
            } else {
                s--;
            }
        } else {
            s +=a;
        }

    }
    cout << c << endl;
    return 0;
}