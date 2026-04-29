#include<iostream>
using namespace std;
int main(){
    int r, g, b;
    string c;
    cin >> r >> g >> b;
    cin >> c;
    
    if(c == "Blue"){
        cout << min(r, g) << endl;
    } else if(c == "Red"){
        cout << min(g, b) << endl;
    } else {
        cout << min(r, b) << endl;
    }
    
    return 0;
}