#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
const long double PI = 3.1415926535897;
int main(){
    int a,b,c;
    while(cin>>a>>b>>c){
        long double p = (long double)(a+b+c)/(long double)2;
        long double l = sqrt(p*(p-a)*(p-b)*(p-c));
        cout<<fixed<<setprecision(4);
        cout<<(a*b*c)/(4*l)*(a*b*c)/(4*l)*PI - l<<" ";
        cout<<l - (l/p)*(l/p)*PI<<" ";
        cout<<(l/p)*(l/p)*PI<<endl;
    }
    return 0;
}