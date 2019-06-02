#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    while(s != "*"){
        bool first = true;
        float tmp = 0;
        int ans = 0;
        for(char x : s)
            if(first && x == '/')
                first = false;
            else if(x == '/'){
                if(tmp == 1.0f)
                    ans += 1;
                tmp = 0;
            }else{
                if(x == 'W')
                    tmp += 1;
                else if(x == 'H')
                    tmp += 1/2.0f;
                else if(x == 'Q')
                    tmp += 1/4.0f;
                else if(x == 'E')
                    tmp += 1/8.0f;
                else if(x == 'S')
                    tmp += 1/16.0f;
                else if(x == 'T')
                    tmp += 1/32.0f;
                else 
                    tmp += 1/64.0f;
            }
        cout<<ans<<endl;
        getline(cin,s);
    }
    return 0;
}