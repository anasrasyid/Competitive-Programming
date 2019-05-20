#include <bits/stdc++.h>

#define endl '\n'
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int nc;
    cin>>nc;
    while(nc > 0){
        long n;
        cin>>n;
        long long apa[231] = {0};
        vector<int> ini;
        int x;
        int mins = 230;
        int maxs = 20;
        for(int i = 0; i <n;i++){
            cin>>x;
            mins = min(mins,x);
            maxs = max(maxs,x);
            apa[x]++;
        }
        for(int j = mins; j <= maxs;j++)
            while(apa[j] > 0){
                cout<<j;
                apa[j]--;
                if(j != maxs || apa[j] != 0)
                    cout<<" ";
            } 
        cout<<endl;
        nc--;
    }
}