#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    while(n >0){
        vector<string> apa[6];
        for(int i = 0; i < n; i++){
            string x,y;
            getline(cin,x);
            getline(cin,y);
            if(y[0] == 'b')
                if(y[7] == 'P')
                    apa[0].push_back(x);
                else if(y[7] == 'M')
                    apa[1].push_back(x);
                else 
                    apa[2].push_back(x);
            else 
                if(y[9] == 'P')
                    apa[3].push_back(x);
                else if(y[9] == 'M')
                    apa[4].push_back(x);
                else 
                    apa[5].push_back(x); 
        }
        for(int i = 0; i < 6; i++){
            if(apa[i].size()> 0)
                sort(apa[i].begin(),apa[i].end());
        }
        for(int i = 0; i < 6; i++)
            if(apa[i].size() > 0)
                for(string c : apa[i]){ 
                    if(i < 3)
                        cout<<"branco ";
                    else 
                        cout<<"vermelho ";
                    if(i % 3 == 0)
                        cout<<"P ";
                    else if(i % 3 == 1)
                        cout<<"M ";
                    else 
                        cout<<"G ";
                    cout<<c<<endl;
                }
        cin>>n;
        cin.ignore();
        if(n != 0)
            cout<<endl;
    }
}