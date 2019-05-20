#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        long long a,b;
        cin>>a>>b;
        if(a < b)
            cout<<"nao encaixa"<<endl;
        else{ 
            long long c =1;
            while(b % c != b)
                c =c*10;
            a = a % c;
            if(a == b)
                cout<<"encaixa"<<endl;
            else 
                cout<<"nao encaixa"<<endl;
        }
    }
    
}