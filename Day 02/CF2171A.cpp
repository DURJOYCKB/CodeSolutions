#include <iostream>
using namespace std;

int main() {
    int n, t;
    cin >> t;
    while(t--){
        cin >> n;

        if(n % 2 == 1) {
            cout << 0 << endl; 
        }
        else{
            cout << (n / 4) + 1 << endl;
        }
        
    }
    
    return 0;
}
