#include <iostream>
#include <string>
#define ll long long
using namespace std;
int main(){
    ll m,n;
    cin>>m>>n;
    while(m != 0 || n != 0){
        ll jum = m+n;
        string s = to_string(jum);
        string fix = "";
        for(char c:s)
            if(c != '0')
                fix = fix + c;
        cout<<fix<<endl;
        cin>>m>>n;
    }
    return 0;
}