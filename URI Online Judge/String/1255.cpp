#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    for (int i = 0; i < n; i++){
        int word[26] = {0};
        int maks = 0;
        string s;
        getline(cin, s);
        for(auto x : s)
            if(x >= 'a' && x <= 'z')
                maks = max(maks, ++word[x -'a']);
            else if(x >= 'A' && x <= 'Z')
                maks = max(maks, ++word[x - 'A']);
        for(int j = 0; j < 26; j++)
            if(word[j] == maks)
                cout<<char(j + 'a');
        cout<<endl;
    }
    return 0;
}