#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n;i++){
        string s;
        getline(cin,s);
        bool dot = true;
        for(int j = 0; j < s.length(); j++){
            if(s[j] == ' ')
                dot = true;
            else if(dot){
                cout<<s[j];
                dot = false;
            }
        }
        cout<<endl;
    }
}