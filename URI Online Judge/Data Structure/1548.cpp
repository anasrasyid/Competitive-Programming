#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comperator(int a, int b){
    return (a > b);
}
int main(){
    int n;
    cin>>n;
    while(n > 0){
        int x;
        cin>>x;
        vector<int> S1;
        for(int i = 0; i < x; i++){
            int tmp;
            cin>>tmp;
            S1.push_back(tmp);
        }
        vector<int> S2 = S1;
        sort(S1.begin(),S1.end(),comperator);
        int tetap = 0;
        for(int i = 0; i < x; i++)
            if(S1[i] == S2[i])
                tetap++;
        cout<<tetap<<endl;
        n--;
    }
    return 0;
}