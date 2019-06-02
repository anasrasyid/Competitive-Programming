#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int ans = 0;
        for(int j = 0; j < n; j++){
            string s;
            cin>>s;
            for(int k = 0; k < s.length(); k++)
                ans += k + j + int(s[k] - 'A'); 
        }
        cout<<ans<<endl;
    }
    return 0;
}