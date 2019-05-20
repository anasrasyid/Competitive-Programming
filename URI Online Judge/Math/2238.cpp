#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll a,b,c,d;
    cin>>a>>b>>c>>d;
    set<ll> solve;
    function<bool(ll)> valid = [&](ll x){
        return x % a == 0 && x % b != 0 && c % x == 0 && d % x != 0; 
    };
    for(int i =1;i*i <= c;i++){
        if(c % i == 0){
            ll e = c / i;
            if(valid(i))
                solve.insert(i);
            if(valid(e))
                solve.insert(e);
        }
    }
    if(solve.size() == 0)
        cout << -1 << endl;
    else 
        cout << *solve.begin() << endl;
    return 0;
}