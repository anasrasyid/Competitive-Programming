#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double a,b;
    cin>>a>>b;
    float c = (a*3.5 + b*7.5)/11.0;
    cout<<"MEDIA = "<<setprecision(5)<<fixed<<c<<endl;
    return 0;
}
