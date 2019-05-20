#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        float x;
        cin>>x;
        int day =0;
        while(x > 1){
            day++;
            x  = x /2;
        }
        cout<<day<<" dias"<<endl;
    }
    return 0;
}
