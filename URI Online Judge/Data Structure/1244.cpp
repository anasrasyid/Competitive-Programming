#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n > 0){
        vector<string> solve[51];
        string s;
        int maks = 0;
        int mins = 51;
        string s1 = "";
        getline(cin,s);
        for(int i = 0; i < s.length(); i++){
            if(s[i] != ' ')
                s1 = s1 + s[i];
            else{
                if(s1 != "") 
                    solve[s1.length()].push_back(s1);
                maks = max(maks,(int)s1.length());
                mins = min(mins,(int)s1.length());
                s1 = "";
            }
        }
        if(s1 != "") 
            solve[s1.length()].push_back(s1);
        maks = max(maks,(int)s1.length());
        mins = min(mins,(int)s1.length());
        for(int i = maks; i >= mins; i--){
            int j = 0;
            int pa = solve[i].size();
            while(pa > j){
                cout<<solve[i][j];
                j++;
                if(pa != j || i != mins)
                    cout<<" ";
            }
        }
        cout<<endl;
        n--;
    }
    return 0;
}