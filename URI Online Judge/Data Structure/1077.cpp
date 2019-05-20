#include <iostream>
#include <stack>
using namespace std;

int prec(char c) { 
    if(c == '^') 
        return 3; 
    if(c == '*' || c == '/') 
        return 2; 
    if(c == '+' || c == '-') 
        return 1; 
    return -1; 
} 

int main(){
    int n;
    cin>>n;
    while(n > 0){
        string s;
        cin>>s;
        stack<char> solve;
        for(char c : s){
            if(c != '+' && c != '-' && c != '*' && c != '^' && c != '/' && c != '(' && c != ')')
                cout<<c;
            else if(c == '(')
                solve.push(c);
            else if(c == ')'){
                while(solve.size() > 0 && solve.top() != '('){
                    cout<<solve.top();
                    solve.pop();
                }
                if(solve.size() && solve.top() == '(')
                    solve.pop();
            }else{
                while(solve.size() > 0 && prec(c) <= prec(solve.top())){
                    cout<<solve.top();
                    solve.pop();
                }
                solve.push(c);
            }
        }
        while(solve.size() > 0){
            cout<<solve.top();
            solve.pop();
        }
        cout<<endl;
        n--;
    }
    return 0;
}