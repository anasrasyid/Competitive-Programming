#include <bits/stdc++.h>
using namespace std;
#define ll long long
typedef pair<ll, ll> pii;

ll findSame(vector<pii> g, ll x){
    for(ll i = 0; i < g.size(); i++)
        if(g[i].first == x)
            return i;
    return -1;
}

ll route(vector<pii> g[], ll v, ll x, ll y){
    vector<ll> dist(v, LONG_MAX);
    set<pii> cek;

    cek.insert(make_pair(0,x));
    dist[x] = 0;
    
    while(!cek.empty()){
        pii tmp = *cek.begin();
        cek.erase(cek.begin());
        ll u = tmp.second;
        
        for(auto i : g[u]){
            int z = i.first;
            int w = i.second;
            if(dist[z] > dist[u] + w){
                if(dist[z] != LONG_MAX)
                    cek.erase(cek.find(make_pair(dist[z],z)));
                dist[z] = dist[u] + w;
                cek.insert(make_pair(dist[z], z));
            }
        }
    }
    if(dist[y] == LONG_MAX)
        return -1;
    return dist[y];
}

int main(){
    ll v, e;
    cin >> v >> e;
    while(v != 0 || e != 0){
        vector<pii> g[v];
        ll s, d, w;
        for(ll i = 0; i < e; i++){
            cin >> s >> d >> w;
            ll x = findSame(g[--d],--s);
            if(s == d){
                w = 0;
            }else if(x != -1){
                g[d][x].second = 0;
                w = 0;
            }
            g[s].push_back(make_pair(d,w));
        }
        ll n;
        cin >> n;
        for (ll i = 0; i < n; i++){
            cin >> s >> d;
            int x = route(g, v, --s, --d);
            if(x != -1)
                cout << x << endl;
            else 
                cout << "Nao e possivel entregar a carta" << endl;
        }
        cout << endl;
        cin >> v >> e;
    }
    return 0;
}