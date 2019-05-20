#include <iostream>
using namespace std;
int main()
{
    long long a,b;
    cin>>a>>b;
    double hasil = (a+b)*((double)(b-a+1)/2);
    cout<<(long long) hasil<<endl;
    return 0;
}
