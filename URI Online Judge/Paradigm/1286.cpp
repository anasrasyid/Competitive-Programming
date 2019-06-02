#include <bits/stdc++.h>
using namespace std;

int solve(int time[], int pizza[], int d, int n){
    vector<int> ans(d+1, 0);
    for(int i = 0; i < n; i++)
        for(int j = d; j >= pizza[i]; j--)
            ans[j] = max(ans[j], time[i] + ans[j - pizza[i]]);
    return ans[d];
}
int main(){
    int n;
    cin >> n;
    while(n != 0){
        int delivery;
        cin >> delivery;
        int time[n];
        int pizza[n];
        for(int i = 0; i < n; i++)
            cin >> time[i] >> pizza[i];
        cout << solve(time, pizza, delivery, n) << " min."<<endl;
        cin >> n;
    }
    return 0;
}