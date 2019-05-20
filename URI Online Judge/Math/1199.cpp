#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    while(s != "-1"){
        long long l;
        if(s.length() > 2 && s[1] == 'x'){
            l = stoi(s,nullptr,16);
            cout<<dec<<l<<endl;
        }else{
            l = stoi(s,nullptr,10);
            cout<<"0x"<<hex<<uppercase<<l<<endl;
        }
        cin>>s;
    }
    return 0;
}
