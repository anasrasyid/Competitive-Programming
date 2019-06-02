#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s;
        getline(cin, s);
        set<char> word;
        for(char x : s)
            if(x >= 'a' && x <= 'z')
                word.insert(x);
        if(word.size() == 26)
            cout<<"frase completa"<<endl;
        else if(word.size() >= 13)
            cout<<"frase quase completa"<<endl;
        else 
            cout<<"frase mal elaborada"<<endl;
    }
    return 0;
}