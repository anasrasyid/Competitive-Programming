#include <bits/stdc++.h>
using namespace std;

bool comperator(pair<char, int> elem1, pair<char, int> elem2) {
    if(elem1.second == elem2.second)
        return elem1.first > elem2.first;
    return elem1.second < elem2.second;
}

int main(){
    string s;
    getline(cin,s);
    while(true){
        vector<pair<char,int>> vec;
        map<char,int> v;
        for(int i = 0; i < s.length(); i++){
            if(v.find(s[i]) == v.end())
                v.insert(pair<char,int>(s[i],1));
            else 
                v[s[i]]++;
        }
        for (auto x = v.begin(); x != v.end(); x++)
            vec.push_back(*x);
        sort(vec.begin(), vec.end(),comperator);
        for(auto x: vec)
            cout<<(int)x.first<<" "<<x.second<<endl;
        if(getline(cin,s))
            cout<<endl;
        else 
            break;
    }
    return 0;
}