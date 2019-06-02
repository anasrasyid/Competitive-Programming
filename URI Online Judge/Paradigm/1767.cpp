#include <bits/stdc++.h>
using namespace std;

void solve(int qt[], int w[], int pac){
    vector<long> qtAns(51, 0);
    vector<int> wAns(51, 0);
    for(int i = 0; i < pac; i++)
        for(int j = 50; j >= w[i]; j--){
            long tmp = qt[i] + qtAns[j - w[i]]; 
            if(tmp > qtAns[j] ){
                qtAns[j] = tmp;
                wAns[j] = wAns[j - w[i]] + 1;
            }else if(tmp == qtAns[j]){
                wAns[j] = min(wAns[j], wAns[j - w[i]]+1);
            }
        }
    cout << qtAns[50] << " brinquedos" << endl;
    int i = 50;
    while(qtAns[i] == qtAns[50] && i > -1) i--;
    cout << "Peso: " << ++i << " kg" << endl;
    cout << "sobra(m) " << pac - wAns[50] << " pacote(s)" << endl;
}

int main(){
    int n;
    cin >> n;
    while(n > 0){
        int pac;
        cin >> pac;
        int qt[pac];
        int weight[pac];
        for(int i = 0; i < pac; i++)
            cin >> qt[i] >> weight[i];
        solve(qt, weight, pac);
        cout << endl;
        n--;
    }
    return 0;
}