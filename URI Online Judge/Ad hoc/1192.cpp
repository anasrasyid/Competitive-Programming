#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int c = 0;
        string s;
        cin>>s;
        if(s[1] >= 'A' && s[1]<= 'Z')
            if(s[2] == s[0])
                c = to_integer(s[2]) + to_integer(s[0]);
            else
                c = to_integer(s[2]) - to_integer(s[0]);
        else 
            c = to_integer(s[2])+to_integer(s[0]);
        cout<<c<<endl;
    }
    
    return 0;
}
