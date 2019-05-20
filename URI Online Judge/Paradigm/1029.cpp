#include <iostream>
using namespace std;

long long isi[40],panggil[40];
int seb;

void fibo(int x)
{
    if(x >= seb){
        for(int j = seb; j <= x; j++)
        {
            isi[j] = isi[j-1]+isi[j-2];
            panggil[j] = panggil[j-1]+panggil[j-2]+1;
        }
        seb =x;
    }
}

int main()
{
    int n,x;
    seb = 2;
    panggil[0] = 1;
    panggil[1] = 1;
    isi[0] = 0;
    isi[1] = 1;
    cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>x;
        fibo(x);
        cout<<"fib("<<x<<") = "<<panggil[x]-1<<" calls = "<<isi[x]<<endl;
    }
    return 0;
}
