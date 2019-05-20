#include <iostream>
#include <string>
using namespace std;

bool isalphabet(char a){
    return ((a >= 'a' && a <= 'z') ||(a >= 'A' && a <= 'Z'));
}

int main(){
    string s;
    while(getline(cin,s)){
        string solve = "";
        char x;
        for(auto c: s)
            if(isalphabet(c)){
                if(c >= 'n' && c <= 'z' && c >= 'a')
                    x = c - 13;
                else if(c >= 'N' && c <= 'Z' && c >= 'A')
                    x = c - 13;
                else
                    x = c  + 13;
                solve = solve + x;
            }else{
                solve = solve + c;
            }
        cout<<solve<<endl;
    }
    return 0;
}