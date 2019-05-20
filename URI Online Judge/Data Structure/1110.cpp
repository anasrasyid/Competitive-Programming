#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n != 0){
        vector<int> solve;
        for(int i = 1; i <= n; i++)
            solve.push_back(i);
        cout<<"Discarded cards:";
        while(solve.size() > 2){
            cout<<" "<<solve[0]<<",";
            solve.erase(solve.begin());
            solve.push_back(solve[0]);
            solve.erase(solve.begin());
        }
        if(n != 1){
            cout<<" "<<solve[0]<<endl;
            cout<<"Remaining card: "<<solve[1]<<endl;
        }else{
            cout<<endl;
            cout<<"Remaining card: "<<solve[0]<<endl;
        }
        cin>>n;
    }
    return 0;
}