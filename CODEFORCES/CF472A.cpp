#include<iostream>
using namespace std;

bool isComposite(int x){
    if(x < 4) return false;

    for(int i=2; i*i<=x; i++){
        if(x % i == 0)
            return true;
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    for(int i=4; i<n; i++){
        int m = n - i;
        if(isComposite(i) && isComposite(m)){
            cout << i << " " << m << endl;
            break;
        }
    }
    return 0;
}