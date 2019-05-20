#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string x;
    int hasil=0;
    int i=0;
    while(getline(cin,x)){
        i++;
        int x;
        cin>>x;
        cin.ignore();
        hasil+=x;
    }
    double rata = (double)hasil/i;
    cout<<setprecision(1)<<fixed<<rata<<endl;
    return 0;
}
