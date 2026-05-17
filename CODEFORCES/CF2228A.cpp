#include<iostream>
using namespace std;
int main(){
    int t, n, w;
    cin >> t;
    while(t--){
        int count=0;
        cin >> n;
        int z=0, o=0, t=0;
        while(n--){
            
            cin >> w;
            if(w==0){
                z++;
            }
            if(w==1){
                o++;
            } if(w==2){
                t++;
            }
        }
            count+=z;

            while(o>0 && t>0){
                count++;
                o--;
                t--;
            }
            count=count+(o/3);
            count=count+(t/3);
        
        
        cout << count << endl;

    }
    return 0;

}