#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        int x,y;
        cin>>x>>y;
        long r = 9*x*x + y*y;
        long b = 2*x*x +25*y*y;
        long c = -100*x +y*y*y;
        if(r > b && r > c)
            cout<<"Rafael ganhou"<<endl;
        else if(b > r && b > c)
            cout<<"Beto ganhou"<<endl;
        else
            cout<<"Carlos ganhou"<<endl;
    }
    
    return 0;
}
