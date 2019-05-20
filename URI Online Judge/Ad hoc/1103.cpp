#include <iostream>
using namespace std;
int main()
{
    int h1,h2,m1,m2;
    cin>>h1>>m1>>h2>>m2;
    while(h1 != 0 || m1 != 0 || h2 != 0 || m2 != 0){
        if(h1 > h2)
            h2+=24;
        if(h1 == h2 && m1 > m2)
            h2+= 24;
        long selisih = (h2-h1)*60+ (m2 -m1);
        cout<<selisih<<endl;
        cin>>h1>>m1>>h2>>m2;
    }
    return 0;
}
