#include <bits/stdc++.h>
using namespace std;

bool isApla(char x){
    return (x >= 'a' && x <= 'z') || (x >= 'A' && x <= 'Z');
}

int main(){
    string s;
    set<string> book;
    while(getline(cin, s)){
        string tmp = "";
        for(auto x : s){
            if(isApla(x)){
                if(x <= 'Z')
                    x += 32;
                tmp = tmp + x;
            }else if(tmp != ""){
                book.insert(tmp);
                tmp = "";
            }
        }
        if(tmp != "")
            book.insert(tmp);
    }
    for(auto x : book)
        cout << x <<endl;
    return 0;
}