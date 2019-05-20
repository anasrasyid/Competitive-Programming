#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    long long n,q;
    int c = 1;
    cin>>n>>q;
    while(n != 0 || q != 0){
        vector <long long> apa;
        long long x;
        for(int i = 0; i < n; i++){
            cin>>x;
            apa.push_back(x);
        }
        sort(apa.begin(),apa.end());
        cout<<"CASE# "<<c<<":"<<endl;
        for(int i = 0; i < q; i++){
            cin>>x;
            vector<long long>::iterator pos = find(apa.begin(),apa.end(),x);
            if(pos != apa.end())
                cout<<x<<" found at "<<(pos - apa.begin()+1)<<endl;
            else
                cout<<x<<" not found"<<endl;
        }
        c++;
        cin>>n>>q;
    }
    return 0;
}
