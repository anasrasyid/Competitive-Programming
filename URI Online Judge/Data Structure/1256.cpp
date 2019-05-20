#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n,m,c;
    cin>>n;
    for(int i = 0; i < n; i++){
        cin>>m>>c;
        vector<int> table[m];
        for(int j = 0; j < c; j++){
            int tmp;
            cin>>tmp;
            table[tmp % m].push_back(tmp);
        }
        for(int j = 0;j < m;j++){
            cout<<j<<" -> ";
            for(auto c: table[j])
                cout<<c<<" -> ";
            cout<<'\\'<<endl;
        }
        if(i != n-1)
            cout<<endl;
    }
    return 0;
}