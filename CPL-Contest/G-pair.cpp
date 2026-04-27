#include<iostream>
using namespace std;
int main(){
    int n;
    long long count=0;
    cin >> n;
    for(int i=1; i<=n; i++){
        count+= n/i;
    }
    
    cout << count << endl;
    return 0;
}