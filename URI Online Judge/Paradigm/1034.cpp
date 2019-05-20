#include <iostream>
#include <algorithm>
using namespace std;

long solve(int balok[],int n,long m){
    long apa[m+1];
    apa[0] =0;
    for(long i = 1; i <= m; i++){
        apa[i] = 99999999;
        for(int j = 0; j < n;j++){
            if(i >= balok[j]){
                apa[i] = min(apa[i],apa[i-(balok[j])]+1);
            }
        }
    }
    return apa[m];
}

int main()
{
    int t;
    cin>>t;
    for(int i =0;i < t; i++){ 
        int n;
        long m;
        cin>>n>>m;
        int balok[n];
        for(int j =0; j< n;j++){
            cin>>balok[j];
        }
        sort(balok,balok+n);
        cout<<solve(balok,n,m)<<endl;
    }
    return 0;
}
