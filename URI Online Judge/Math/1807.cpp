#include <iostream>
#include <math.h>
using namespace std;
#define ll long long

ll kuadrat(ll x){
    return (x*x) % 2147483647;
}

ll solusi(ll n){
    if(n == 0)
        return 1;
    if( n == 1)
        return 3;
    if(n % 2 == 0){
        return kuadrat(solusi(n /2)) % 2147483647;
    }
    return (3*solusi(n-1)) % 2147483647;
}

int main(){
    ll n;
    cin>>n;
    cout<<(solusi(n) % 2147483647) <<endl;
    return 0;
}