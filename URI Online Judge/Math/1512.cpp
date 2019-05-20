#include <iostream>
using namespace std;
#define ll long long

ll gcd(ll a,ll b){
    if(a % b == 0)
        return b;
    return gcd(b,a%b);
}

int main(){
    ll n,a,b;
    cin>>n>>a>>b;
    while(n != 0 && a != 0 && b != 0){
        cout<<((n/a)+(n/b)-(n/(a*b/gcd(a,b))))<<endl;
        cin>>n>>a>>b;
    }
    return 0;
}