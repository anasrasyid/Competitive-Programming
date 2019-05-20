#include <iostream>
#include <algorithm>
using namespace std;

long gcd(long x, long y){
    if(x % y == 0)
        return y;
    gcd(y,x%y);
}

int main()
{
    long long n;
    cin>>n;
    while(n>0){
        long a,b,c,d,penyebut,pembilang;
        char x,y;
        cin>>a>>x>>b>>y>>c>>x>>d;
        if(y =='+'){
            pembilang = a*d + b*c;
            penyebut = b*d;
        }
        if(y =='-'){
            pembilang = a*d - b*c;
            penyebut = b*d;
        }
        if(y =='*'){
            pembilang = a*c;
            penyebut = b*d;
        }
        if(y =='/'){
            pembilang = a*d;
            penyebut = b*c;
        }
        long fpb = gcd(abs(pembilang),abs(penyebut));
        cout<<pembilang<<x<<penyebut<<" = "<<(pembilang/fpb)<<x<<(penyebut/fpb)<<endl;
        n--;
    }
    return 0;
}
