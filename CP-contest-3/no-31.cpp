#include<iostream>
using namespace std;
int main(){
    string a, b;
    cin >> a >> b;
    int pos=0;
    for(int i=0; i<a.size(); i++){
        for(int j=pos; j<b.size(); j++){
            if(a[i] == b[j]){
                cout << j+1 << " ";
                pos = j+1;
                break;
            }
        }        
    }
    return 0;
}