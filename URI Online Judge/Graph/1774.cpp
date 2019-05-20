#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
typedef pair<int,int> pii;
typedef pair<pii,int> piii;

int main(){
    int r,c;
    cin>>r>>c;
    piii e[c];

    for(int i =0; i < c;i++){
        int u, v,w;
        cin>>u>>v>>w;

        e[i] = make_pair(make_pair(--u,--v),w);
    }
    auto comparator = [](piii p, piii q){
        return p.second < q.second;
    };
    sort(e,e +c,comparator);

    vector<int> link(r);
    for(int i =0; i <r;i++) link[i] =i;

    vector <int> size(r,1);

    function <int(int)> find = [&link](int x){
        while(x != link[x]) x = link[x];
        return x;
    };
    function<bool(int,int)> same = [&find](int x, int y){
        return find(x) == find(y);
    };
    function<void(int,int)> unite = [&find, &link, &size](int x, int y){
        x = find(x);
        y = find(y);
        if(size[x] > size[y]) swap(x,y);
        size[y] += size[x];
        link[x] = y;
    };
    int ans =0;
    for(int i =0; i < c; i++){
        piii P = e[i];
        if(!same(P.first.first,P.first.second)){
            unite(P.first.first,P.first.second);
            ans += P.second;
        }
    }
    cout<<ans<<endl;
    return 0;
}