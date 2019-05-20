#include <iostream>
#include <string>
#include <bitset>
using namespace std;

string to_bin(long long n){
    if(n == 0)
        return "0";
    string s ="";
    while(n != 0){
        if(n % 2 == 1)
            s = "1" + s;
        else
            s = "0" + s;
        n = n/2;
    }
    return s;
}

int main()
{
    long n;
    cin>>n;
    for(int i = 1; i <= n; i++){
        long long l;
        string s,tipe;
        cin>>s>>tipe;
        cout<<"Case "<<dec<<i<<":"<<endl;
        if(tipe == "bin"){
            l = stoll(s,nullptr,2);
            cout<<dec<<l<<" dec"<<endl;
            cout<<hex<<l<<" hex"<<endl;
        }else if(tipe == "dec"){
            l = stoll(s,nullptr,10);
            cout<<hex<<l<<" hex"<<endl;
            cout<<to_bin(l)<<" bin"<<endl;
        }else{
            l = stoll(s,nullptr,16);
            cout<<dec<<l<<" dec"<<endl;
            cout<<to_bin(l)<<" bin"<<endl;
        }
        cout<<endl;
    }
    
    return 0;
}
