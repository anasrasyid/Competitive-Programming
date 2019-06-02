#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isCycle(set<ll>g[] , ll v){
    vector<ll> inDegree (v, 0);
    for(int i = 0; i < v; i++)
        for(auto x : g[i])
            inDegree[x]++;
    
    queue<ll> cek;
    for(int i = 0; i < v; i++)
        if(inDegree[i] == 0)
            cek.push(i);

    ll count = 0;
    while(!cek.empty()){
        int n = cek.front();
        cek.pop();
        for(auto x : g[n])
            if(--inDegree[x] == 0)
                cek.push(x);
        count++;
    }
    return (count != v);
}

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        ll v, e;
        ll s, d;
        cin >> v >> e;
        set<ll> map[v];
        for(ll j = 0; j < e; j++){
            cin >> s >> d;
            map[--s].insert(--d);
        }
        if(isCycle(map, v))
            cout << "SIM" << endl;
        else 
            cout << "NAO" << endl;
        }
    return 0;
}