#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int n;
    int i;
    long double s =0;
    cin >> n;
    int temp = n;
    while(n--){
        cin >> i;
        s = s + i;

    }
    cout << fixed << setprecision(12) << s/temp << endl;
    return 0;
}