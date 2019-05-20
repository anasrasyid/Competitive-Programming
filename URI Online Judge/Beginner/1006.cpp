#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b,c;
    cin>>a>>b>>c;
    double d = (2*a + 3*b + 5*c)/10.0;
    cout<<"MEDIA = "<<setprecision(1)<<fixed<<d<<endl;
    return 0;
}
