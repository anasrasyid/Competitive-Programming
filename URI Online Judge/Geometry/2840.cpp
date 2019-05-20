#include <iostream>
using namespace std;
const float PI = 3.1415;
int main()
{
    int r,l;
    cin>>r>>l;
    r = r*r*r;
    double hasil = l /(4*r*PI/3);
    cout<<(int) hasil<<endl;
    return 0;
}
