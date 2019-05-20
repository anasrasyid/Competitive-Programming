#include <iostream>
#include <stack>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    for(int i = 0; i < n; i++){
        string s;
        getline(cin,s);
        int hasil =0;
        stack<char> diamond;
        for(char c : s ){
            if(c == '<')
                diamond.push(c);
            if(c == '>' && diamond.size() > 0){
                hasil++;
                diamond.pop();
            }
        }
        cout<<hasil<<endl;
    }
    
    return 0;
}
