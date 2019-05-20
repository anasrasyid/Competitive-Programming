#include <iostream>
using namespace std;

long long faktorial(int x, int y){
    if(x <= 1)
        return 1;
    return x*faktorial(x-y,y);
}

int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int bil = 0;
        int k = 0;
        string tmp;
        cin>>tmp;
        for(auto x: tmp){
            if(x == '!')
                k++;
            else
                bil = (x - '0')+bil*10;
        }
        cout<<faktorial(bil,k)<<endl;
    }
    return 0;
}