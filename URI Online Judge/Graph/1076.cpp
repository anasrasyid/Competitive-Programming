#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int s;
        cin>>s;
        int v, e;
        cin>>v>>e;
        vector<int> graph[v];
        for(int j = 0; j < e; j++ ){
            int s, d;
            cin>>s>>d;
            graph[s].push_back(d);
            graph[d].push_back(s);
        }
        vector<int> path;
        path.push_back(s);
        queue<int> cek;
        for(auto x : graph[s])
            cek.push(x);
        while(cek.size() > 0){
            if(find(path.begin(), path.end(), cek.front()) == path.end()){
                path.push_back(cek.front());
                for(auto x : graph[cek.front()])
                    cek.push(x);   
            }
            cek.pop();
        }
        cout<< 2*(path.size()-1)<<endl;
    }
    return 0;
}