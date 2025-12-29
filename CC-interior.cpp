#include <bits/stdc++.h>
using namespace std;

int main() {
	
	int t,a, b, c, d;
	cin >> t;
	while(t--){
	    cin >> a >> b >> c >> d;
	    int s = a + b;
	    int v = c + d;
	    if(s <= v){
	        cout << s << endl;
	    } else {
	        cout << v << endl;
	    }
	}
	return 0;

}
