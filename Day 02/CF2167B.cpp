#include<iostream>
#include<string>

using namespace std;

bool isAnagram(string str1, string str2, int n){
    if(str1.length() != str2.length()){
        cout << "NO"<< endl;
        return false;
    }
    int count[26] = {0};
    
    for(int i = 0;i<n ;i++){
        int idx = str1[i]-'a';
        count[idx]++;
    }

     for(int i = 0;i<n;i++){
        int idx = str2[i]-'a';
        if(count[idx] == 0){
            cout << "NO"<< endl;
            return false;;
        } else{
            count[idx]--;
        }
    }
    cout << "YES"<< endl;
    return true;
}

int main() {
    string str1 ;
    string str2 ;
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
        cin >> str1 >> str2;
        isAnagram(str1, str2, n);
        
    }
    
    return 0;

}