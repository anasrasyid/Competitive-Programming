#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main(){
    int n;
    string apa[50];
    cin>>n;
    while(n != 0){
        int len = -1; 
        for(int i = 0; i < n; i++){
            cin>>apa[i];
            len = max(len,(int)apa[i].length());
        }
        for(int i = 0; i < n; i++){
            cout.width(len);
            cout<<right<<apa[i]<<endl;
        }
        cin>>n;
        if(n != 0)
            cout<<endl;
    }
    return 0;
}