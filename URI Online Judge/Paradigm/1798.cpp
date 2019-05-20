#include <iostream>
#include <algorithm>

using namespace std;
long solve(int panjang[],int harga[],int n,int t){
    long solusi[t+1];
    for(int i = 0; i <= t; i++){
        solusi[i] = 0;
        for(int j = 0; j < n; j++){
            if(panjang[j] <= i)
                solusi[i] = max(solusi[i],solusi[i - panjang[j]]+harga[j]);
        }
        
    }
    return solusi[t];
}
int main()
{
    int n,t;
    cin>>n>>t;
    int panjang[n];
    int harga[n];
    for(int i =0; i<n;i++)
        cin>>panjang[i]>>harga[i];
    cout<<solve(panjang,harga,n,t)<<endl;
    return 0;
}
