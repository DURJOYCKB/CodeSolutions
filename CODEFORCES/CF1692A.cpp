#include<iostream>
using namespace std;
int main(){
    int n, a, b, c, d;
    cin >> n;
    while(n--){
        cin >> a >> b >> c >> d;
        int count=0;
        if(a<b)count++;
        if(a<c)count++;
        if(a<d)count++;
        cout << count << endl;
    }

}