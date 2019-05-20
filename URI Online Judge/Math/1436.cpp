#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    for(int i =1; i <=t ;i++){
        int n,x;
        cin>>n;
        int kap;
        for(int j = 0;j<n;j++){
            cin>>x;
            if(j == n/2)
                kap = x;
        }
        cout<<"Case "<<i<<": "<<kap<<endl;
    }
    return 0;
}
