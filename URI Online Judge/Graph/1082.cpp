#include <bits/stdc++.h>
using namespace std;

void findComponen(vector<int> g[], int v){
    vector<int> visited;
    int sumComponen = 0;
    for(int i = 0; i < v; i++){
        vector<int> path;
        if(find(visited.begin(), visited.end(), i) == visited.end()){
            visited.push_back(i);
            path.push_back(i);
            sumComponen++;
            queue<int> cek;
            for(auto x : g[i])
                cek.push(x);
            while(cek.size() > 0){
                int tmp = cek.front();
                cek.pop();
                if(find(visited.begin(), visited.end(), tmp) == visited.end()){
                    path.push_back(tmp);
                    visited.push_back(tmp);
                    for(auto x : g[tmp])
                        cek.push(x);
                }
            }
            sort(path.begin(), path.end());
            for(auto x : path)
                cout<<char (x + 'a')<<',';
            cout<<endl;
        }
    }
    cout<< sumComponen <<" connected components"<<endl;
}

int main(){
    int t;
    cin>>t;
    for (int i = 1; i <= t; i++){
        int v,e;
        cin>>v>>e;
        vector<int> graph[v];
        for (int j = 0; j < e; j++){
            char s,d;
            cin>>s>>d;
            graph[s - 'a'].push_back(d - 'a');
            graph[d - 'a'].push_back(s - 'a');
        }
        cout<<"Case #"<<i<<":"<<endl;
        findComponen(graph,v);
        cout<<endl;
    }
    return 0;
}