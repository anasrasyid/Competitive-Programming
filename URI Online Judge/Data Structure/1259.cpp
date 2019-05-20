#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    long n;
    vector <int> even,odd;
    cin>>n;
    for(long i = 0; i < n; i++){
        long x;
        cin>>x;
        if(x % 2 == 0)
            even.push_back(x);
        else
            odd.push_back(x);
    }
    sort(even.begin(),even.end());
    sort(odd.begin(),odd.end());
    for(auto x: even)
        cout<<x<<endl;
    long j = odd.size() -1;
    while(j >= 0){
        cout<<odd[j]<<endl;
        j--;
    }
    
    return 0;
}
