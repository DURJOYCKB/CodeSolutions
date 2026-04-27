#include<iostream>
using namespace std;

int main(){
    int n, x;
    cin >> n;
    while(n--){
        cin >> x;
        int count = 0;
        for(int i = 1; i * i <= x; i++){
            if(x % i == 0){
                if(i * i == x){
                    count++; 
                }       
                else {
                    count += 2; 
                }    
            }
        }
        cout << count << endl;
    }
    return 0;
}