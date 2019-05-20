#include <iostream>
#include <algorithm>
#include <vector>
#define ll long long
using namespace std;

bool comperator(pair<ll,ll> a, pair<ll,ll> b){
    if(a.second == b.second){
        if(a.first % 2 + b.first % 2 == 2 )
            return (a.first > b.first);
        if(a.first % 2 + b.first % 2 == 0 )
            return(a.first < b.first);
        if(a.first % 2 == 0)
            return false;
        return true;
    }
    return(a.second < b.second);
}

int main(){
    ll n,m;
    cin>>n>>m;
    while(n != 0 || m != 0){
        cout<<n<<" "<<m<<endl;
        vector<pair<ll,ll>> solve;
        for(ll i = 0; i < n; i++){
            ll tmp;
            cin>>tmp;
            solve.push_back(pair<ll,ll>(tmp,(tmp%m)));
        }
        sort(solve.begin(),solve.end(),comperator);
        for(auto x : solve)
            cout<<x.first<<endl;
        cin>>n>>m;
    }
    cout<<n<<" "<<m<<endl;
    return 0;
}