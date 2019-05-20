#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int mins = 3;
    long long apa[18];
    apa[1] = 0;
    apa[2] = 1;
    int n;
    while(cin>>n){
        for(int i = mins; i <= n; i++){
            if(i % 2 != 0)
                apa[i] = apa[i-1]+apa[i-2];
            else
                apa[i] = apa[i-1]*apa[i-2];
        }
        cout<<apa[n]<<endl;
        mins = max(mins,n);
    }
    return 0;
}