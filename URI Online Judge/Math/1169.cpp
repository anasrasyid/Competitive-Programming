#include <iostream>
#include <math.h>
using namespace std;
#define ull unsigned long long
#define endl '\n'

int main()
{
    int n;
    cin>>n;
    while(n > 0){
        int x;
        cin >>x;
        ull hasil;
        if(x < 14)
            hasil =  0;
        else
            hasil = pow(2,(x-5)) /375;
        cout<<hasil<<" kg"<<endl;
        n--;
    }
    return 0;
}
