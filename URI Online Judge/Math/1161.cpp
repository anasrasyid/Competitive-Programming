#include <iostream>
using namespace std;

long long apa[21];
int seb;

long long fak(int n)
{
    if(n <= seb)
        return apa[n];
    for(int i = seb+1; i <= n; i++)
        apa[i] = i*apa[i-1];
    seb = n;
    return apa[n];
}

int main()
{
    int m,n;
    seb = 0;
    apa[0] =1;
    while(cin>>m>>n)
        cout<<(fak(m)+fak(n))<<endl;
    return 0;
}