#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int apa[51];
    apa[1] = 1;
    int j = 2;
    for(int i = 2; i < 51; i++){
        apa[i] = apa[i-1]+j;
        if(i % 2 == 0)
            j = j+2;
    }
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        cout<<apa[n]<<endl;
    }
    return 0;
}