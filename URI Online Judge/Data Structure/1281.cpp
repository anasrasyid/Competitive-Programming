#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        map<string,float> food;
        for(int j = 0; j < n; j++){
            string s;
            float x;
            cin>>s>>x;
            food.insert(pair<string,float>(s,x));
        }
        int m;
        cin>>m;
        float ans = 0;
        for (int j = 0; j < m; j++){
            string s;
            int x;
            cin>>s>>x;
            ans += (food[s]*x);
        }
        cout<<"R$ "<<fixed<<setprecision(2)<<ans<<endl;
    }
    return 0;
}