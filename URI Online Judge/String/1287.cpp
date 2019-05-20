#include <iostream>
#include <string>
using namespace std;
int main(){
    string s;
    while(getline(cin,s)){
        long long hasil = 0;
        bool error = false;
        bool cek = false;
        int j = 0;
        while(!cek && j <s.length())
            if(s[j] == ' ' || s[j] == ',')
                j++;
            else 
                cek = true;
        for(char c : s){
            if(c == 'o' || c == 'O')
                hasil = hasil*10;
            else if(c == 'l')
                hasil = hasil*10 + 1;
            else if(c >= '0' && c <= '9')
                hasil = hasil*10 + (int)(c - '0');
            else if(c == ',' || c == ' ')
                error = false;
            else 
                error = true;
            if(hasil > 2147483647)
                error = true;
            if(error)
                break;
        }
        if(error || !cek)
            cout<<"error"<<endl;
        else
            cout<<hasil<<endl;
    }
    return 0;
}