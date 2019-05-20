#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    double x;
    cin>>x;
    x =(x*x*3.14159);
    cout<<setprecision(4)<<fixed<<"A="<<x<<endl;
    return 0;
}
