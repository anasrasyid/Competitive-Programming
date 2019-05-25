#include <bits/stdc++.h>
using namespace std;

int V,E;
int adj[20][20];
int lbl[20];

void intial(){
    for(int i = 0; i < 20; i++){
        lbl[i] = 0;
        for(int j = 0 ; j < 20; j++)
            adj[i][j] = 0;
    }
}
void print(int x, int y, int s, bool b){
    for(int i = 0; i < s; i++) cout<<" ";
    cout<<x<<'-'<<y;
    if(b) cout<<" pathR(G,"<<y<<')';
    cout<<endl;
}
void dfsR(int v, int s){
    lbl[v]++;
    for (int w = 0; w < V; w++){
        if(adj[v][w] == 1)
            if(lbl[w] == -1){
                s+= 2;
                print(v,w,s,true);
                dfsR(w,s);
                s-= 2;
            }else{
                print(v,w,s+2,false);
            }
    }
}

int main(){
    int t;
    cin>>t;
    for(int i = 1; i <= t; i++){
        intial();
        cin>>V>>E;
        for(int j = 0; j < E; j++){
            int s, d;
            cin>>s>>d;
            adj[s][d] = 1;
            lbl[s] = lbl[d] = -1;
        }
        cout<<"Caso "<<i<<':'<<endl;
        for(int j = 0; j < V; j++){
            int space = 0;
            if(lbl[j] == -1){
                dfsR(j,space);
                cout<<endl;
            }
        }
    }
}