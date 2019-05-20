#include <iostream>
#include <algorithm>
using namespace std;

long solvesoal(long apa[],int n){
    long hasil = 0;
    for(int i = 0; i < n; i++)
    {
        long x = 0;
        for(int j = i; j < n; j++)
        {
            x = x + apa[j];
            hasil = max(hasil,x);
        }
    }
    cout<<hasil<<endl;
}

int main()
{
    int n;
    while(cin>>n){
        long biaya;
        cin>>biaya;
        bool b = false;
        long apa[n];
        for(int i = 0; i < n; i++)
        {
            cin>>apa[i];
            apa[i]= apa[i] - biaya;
            if(apa[i] > 0)
                b = true;
        }
        if(b)
            solvesoal(apa,n);
        else 
            cout<<0<<endl;
    }
    return 0;
}
