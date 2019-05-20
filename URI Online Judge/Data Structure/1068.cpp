#include <iostream>
#include <stack>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        bool cek = true;
        stack<char> apa;
        for(char c: s){
            if(!cek)
                break;
            if(c == '(' )
                apa.push(c);
            else if(c == ')')
                if(apa.size()>0)
                    apa.pop();
                else
                    cek = false;
        }
        if(cek && apa.size() == 0)
            cout<<"correct"<<endl;
        else
            cout<<"incorrect"<<endl;
    }
    return 0;
}
