#include<iostream>
using namespace std;
int main(){
    int n;

    for(int i=0; i>=0; i++){
        int sum=0, a=5;;
        cin >> n;
        if( n == 0){
            break;
        }
        while(a<=n){
            sum += n / a;
            a = a * 5;
        }
        cout << sum << endl;
    }
    return 0;
}