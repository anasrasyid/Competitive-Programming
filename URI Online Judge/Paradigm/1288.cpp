#include <bits/stdc++.h>
using namespace std;

int solve(int power[], int weight[], int capacity, int n){
    vector<int> ans(capacity+1,0);
    for(int i = 0; i < n; i++){
        for(int j = capacity; j >= weight[i]; j-- ){
            ans[j] = max(ans[j],power[i] + ans[j - weight[i]]);
        }
    }
    return ans[capacity];
} 

int main(){
    int t;
    cin >> t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        int power[n];
        int weight[n];
        for(int j = 0; j < n; j++)
            cin >> power[j] >> weight[j];
        int r;
        cin >> r;
        int defense;
        cin >> defense;
        if(solve(power,weight,r,n) >= defense)
            cout << "Missao completada com sucesso" << endl;
        else 
            cout << "Falha na missao" << endl; 
    }
    return 0;
}