#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    long long apa[101];
    apa[1] = 1;
    int mins = 2;
    cin>>n;
    while(n != 0){
        for(int i = mins;i <= n;i++)
            apa[i] = i*i + apa[i-1];
        cout<<apa[n]<<endl;
        mins = max(mins,n);
        cin>>n;
    }
    return 0;
}
