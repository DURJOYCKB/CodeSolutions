#include<iostream>
#include<set>
using namespace std;
int main(){
    int n;
    cin >> n;

    for(int i=n+1; i>=0; i++){
        set<int> s;
        int x = i;
        while(x>0){
            s.insert(x%10);
            x= x/10;
            
        }
        if(s.size() == 4){
            cout << i << endl;
            break;
        }
    }
    return 0;
}