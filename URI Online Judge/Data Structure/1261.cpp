#include <bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    map<string,long> word;
    for(int i = 0; i < m; i++){
        string s;
        long x;
        cin>>s>>x;
        word.insert(pair<string,long>(s,x));
    }
    cin.ignore();
    for(size_t i = 0; i < n; i++){
        long ans = 0;
        string s = "";
        while(s != "."){
            getline(cin,s);
            string tmp = "";
            for(char x : s){
                if(x == ' '){
                    if(word.find(tmp) != word.end())
                        ans += word[tmp];
                    tmp = "";
                }else{ 
                    tmp = tmp + x;
                }
            }
            if(word.find(tmp) != word.end())
                ans += word[tmp];
        }
        cout<<ans<<endl;
    }
    return 0;
}
