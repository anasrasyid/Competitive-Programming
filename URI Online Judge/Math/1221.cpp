#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        bool prim = true;
        long x;
        cin>>x;
        if(x == 1)
            prim = false;
        long j= 2;
        while(j*j <= x && prim){
            if(x % j == 0)
                prim = false;
            j++;
        }
        if(prim)
            cout<<"Prime"<<endl;
        else
            cout<<"Not Prime"<<endl;
    }
    
    return 0;
}
