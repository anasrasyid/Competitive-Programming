#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    while(getline(cin,s)){
        int i = 0;
        char c;
        bool b = true;
        while(i < s.length()){
            char c = s[i];
            if(c != ' ')
                if((c>= 'a' && c <= 'z')||(c>= 'A' && c <= 'Z'))
                    if(b){
                        if(c >= 'a')
                            c = char(c-32);
                        b = !b;
                    }else { 
                        if(c <= 'Z')
                            c = char(c+32);
                        b = !b;
                    }
            cout<<c;
            i++;
        }
        cout<<endl;
    }
    
    return 0;
}
