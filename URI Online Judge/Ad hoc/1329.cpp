#include <iostream>
using namespace std;
int main()
{
    long n,x;
    cin>>n;
    while (n != 0){
        long a =0;
        long b =0;
        for(long i =0;i<n;i++){
            cin>>x;
            if(x != 1)
                a++;
            else
                b++;
        }
        cout<<"Mary won "<<a<<" times and John won "<<b<<" times"<<endl;
        cin>>n;
    }
    return 0;
}
