#include<iostream>
using namespace std;

long gcd(int a,int b){
    if(b == 0)
        return a;
    return gcd(b,a%b);
}

int main()
{
    int n,f1,f2;
    cin>>n;
    while(n>0){
       cin>>f1>>f2;
       cout<<gcd(f1,f2)<<endl;
       n--;
    }
    return 0;
}
