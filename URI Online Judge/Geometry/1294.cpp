#include <iostream>
#include <algorithm>
#include <iomanip>
#include <math.h>
using namespace std;
int main()
{
    double l,w;
    while(cin>>l>>w){
        cout<<fixed<<setprecision(3);
        double a = 12.0;
        double b = -4.0*(l+w);
        double c = l*w;
        double x1 = (-b - sqrt(b*b -(4.0*a*c)))/(2.0*a);
        double x2 = (-b + sqrt(b*b -(4.0*a*c)))/(2.0*a);
        if(2*x2 > min(l,w))
            x2 = min(l,w) /2.0;
        cout<<x1<<" 0.000 "<<x2<<endl;
    }
    return 0;
}
