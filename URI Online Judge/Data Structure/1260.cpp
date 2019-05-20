#include <bits/stdc++.h>
using namespace std;

bool comperator(pair<string, double> elem1, pair<string, double> elem2) {
    return elem1.first < elem2.first;
}

int main(){
    int n;
    cin>>n;
    cin.ignore();
    cin.ignore();
    while(n > 0){
        string s;
        double sum =0;
        vector <pair<string,double>> vec;
        map <string,double> name;
        getline(cin,s);
        while(s != ""){
            sum++;
            if(name.find(s) == name.end())
                name.insert(pair<string,double>(s,1));
            else 
                name[s]++;
            getline(cin,s);
        }
        for(auto x : name)
            name[x.first] = 100*x.second/sum;
        for(auto x  = name.begin(); x != name.end();x++)
            vec.push_back(*x);
        sort(vec.begin(),vec.end(),comperator);
        for(auto x : vec)
            cout<<x.first<<" "<<fixed<<setprecision(4)<<x.second<<endl;
        if(n != 1)
            cout<<endl;
        n--;
    }
    return 0;
}