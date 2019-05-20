#include <iostream>
#include <string>
using namespace std;

int main(){
    char d;
    string n;
    cin>>d>>n;
    while(d != '0' || n != "0"){
        string solve = "0";
        for(int i = 0; i < n.length(); i++)
            if(n[i] != d)
                solve = solve + n[i];
        while(solve[0] == '0' && solve.length() > 1){
            solve.erase(solve.begin());
        }
        cout<<solve<<endl;
        cin>>d>>n;
    }
    return 0;
}