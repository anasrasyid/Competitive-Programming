#include <iostream>
#include <map>
using namespace std;
int main()
{
    int n,x;
    map<int,int> apa;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>x;
        if(apa.find(x) == apa.end())
            apa[x] = 0;
        apa[x]++;
    }
    for(auto c: apa)
        cout<< c.first<<" aparece "<<c.second<<" vez(es)"<<endl;
    return 0;
}
