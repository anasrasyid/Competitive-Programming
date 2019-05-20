#include <iostream>
#include <string>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s;
        getline(cin,s);
        long mid = (s.length()) /2;
        string s1 = "";
        string s2 = "";
        for(int j = 0; j < s.length(); j++){
            if(j < mid)
                s1 = s[j] + s1;
            else 
                s2 = s[j] + s2;
        }
        cout<<s1<<s2<<endl;
    }
    return 0;
}