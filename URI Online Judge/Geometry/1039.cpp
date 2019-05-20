#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    long long r1,x1,y1,r2,x2,y2;
    while(cin>>r1>>x1>>y1>>r2>>x2>>y2){
        float jarak = sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1)));
        if(r1 - jarak >= r2)
            cout<<"RICO"<<endl;
        else
            cout<<"MORTO"<<endl;
    }
    return 0;
}
