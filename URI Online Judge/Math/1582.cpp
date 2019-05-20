#include <iostream>
#include <algorithm>
using namespace std;

long gcd(long a,long b){
    if(a % b == 0)
        return b;
    return gcd(b,a%b);
}

bool segitiga(long x, long y, long z){
    return (x*x + y*y == z*z);
}

int main()
{
    long apa[3];
    while(cin>>apa[0]>>apa[1]>>apa[2]){
        sort(apa,apa+3);
        if(segitiga(apa[0],apa[1],apa[2]))
            if(gcd(gcd(apa[0],apa[1]),apa[2]) == 1)
                cout<<"tripla pitagorica primitiva"<<endl;
            else 
                cout<<"tripla pitagorica"<<endl;
        else
            cout<<"tripla"<<endl;
    }
    return 0;
}
