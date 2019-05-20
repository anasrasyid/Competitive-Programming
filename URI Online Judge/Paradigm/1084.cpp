#include <iostream>
using namespace std;
#define ll long long
int main()
{
    ll n,d;
    cin>>n>>d;
    while(n != 0 || d != 0){
        string str;
        cin>>str;
        ll i = 0;
        while(d > 0 && i < n){
            if(i != n-1 && str[i] < str[i+1]){
                str.erase(str.begin()+i);
                if(i > 2)
                    i = i-2;
                else 
                    i = 0;
                n--;
                d--;
            }else{
                i++;
            }
        }
        n = n-d;
        for(int j = 0; j < d; j++)
            str.erase(str.begin()+n);
        cout<<str<<endl;
        cin>>n>>d;   
    }
    return 0;
}