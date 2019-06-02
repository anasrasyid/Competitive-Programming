#include <iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i = 0; i < t; i++){
        int n;
        cin>>n;
        string s;
        cin>>s;
        bool same = true;
        for(int j = 0; j < n-1; j++){
            string tmp;
            cin>> tmp;
            if(same)
                same = (s == tmp);
        }
        if(same)
            cout<<s<<endl;
        else 
            cout<<"ingles"<<endl;
    }
    return 0;
}