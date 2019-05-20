#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
#define ld long double

int main()
{
    ld x,y;
    long long i = 1;
    while(cin>>x>>y){
        cout<<"Projeto "<<i<<":"<<endl;
        cout<<"Percentual dos juros da aplicacao: ";
        cout<<fixed<<setprecision(2)<<(100*(y-x)/x)<<" %"<<endl;
        i++;
        cout<<endl;
    }
    return 0;
}
