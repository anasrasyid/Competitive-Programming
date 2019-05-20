#include <iostream>
#include <string>
using namespace std;
#define ull unsigned long long

int main(){
    ull n,x;
    cin>>n;
    while(n != 0){
        string s = "";
        while(n != 0){
            x = n % 32;
            if(x <= 9)
                s = to_string(x) + s;
            else{
                x = (x - 10) + 65;
                s = (char)x + s;    
            }
            n = n/32;
        }
        cout<<s<<endl;
        cin>>n;
    }
    cout<<n<<endl;
    return 0;
}