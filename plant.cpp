#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t, n;
	cin >> t;
	while(t--){
	    cin >> n;
	    int a[n],b[n];
	    for(int i=0; i<n ; i++){
	        cin >> a[i];
	    }
	    for(int i=0; i<n-1; i++){
	        b[i] = min(a[i], a[i+1]);
	    }
	    cout << *max_element(b, b+n-1) << endl;
	    
	}
	return 0;

}
