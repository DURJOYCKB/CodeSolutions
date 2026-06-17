#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int n, x;
    int p[5001], m[5001], s[5001];

    int pi=0, mi=0, si=0;
    cin >> n;
    for(int i=0; i<n; i++) {
        cin >> x;

        if(x==1)
            p[pi++] = i+1;

        else if(x==2)
            m[mi++] = i+1;

        else
            s[si++] = i+1;
    }
    int w = min({pi, mi, si});

    cout << w << endl;

    for(int i=0; i<w; i++) {
        cout << p[i] << " "
             << m[i] << " "
             << s[i] << endl;
    }
    return 0;
}