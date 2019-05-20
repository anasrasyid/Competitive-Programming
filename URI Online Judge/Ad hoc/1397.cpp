#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n != 0){
        int a,b;
        int na =0;
        int nb =0;
        for(int i = 0; i < n; i++){
            cin>>a>>b;
            if(a > b)
                na++;
            if(b > a)
                nb++;
        }
        cout<<na<<" "<<nb<<endl;
        cin>>n;
    }
    return 0;
}
