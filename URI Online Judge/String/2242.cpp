#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string s1 = "";
    for(auto x : s)
        if(x == 'a' || x == 'i' || x == 'u' || x == 'e' || x == 'o')
            s1 += x;
    string s2 = s1;
    reverse(s2.begin(), s2.end());
    if(s1 == s2)
        cout<<'S'<<endl;
    else 
        cout<<'N'<<endl;
    return 0;
}