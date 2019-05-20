#include <iostream>
#include <queue>
using namespace std;
int main(){
    long long x,y;
    cin>>x>>y;
    while(x != 0 || y != 0){
        queue<int> x1,y1;
        int ans = 0;
        int tmp = 0;
        while(x != 0){
            x1.push(x%10);
            x = x/ 10;
        }
        while(y != 0){
            y1.push(y%10);
            y = y/ 10;
        }
        while(!x1.empty() && !y1.empty()){
            if(tmp+x1.front()+y1.front() > 9){
                ans++;
                tmp = 1;
            }else{
                tmp = 0;
            }
            x1.pop();
            y1.pop();
        }
        while(!x1.empty()){
            if(tmp+x1.front() > 9){
                ans++;
                tmp = 1;
            }else{
                tmp =0;
            }
            x1.pop();
        }
        while(!y1.empty()){
            if(tmp+y1.front() > 9){
                ans++;
                tmp = 1;
            }else{
                tmp =0;
            }
            y1.pop();
        }
        if(ans == 0)
            cout<<"No carry operation."<<endl;
        else if(ans == 1)
            cout<<"1 carry operation."<<endl;
        else
            cout<<ans<<" carry operations."<<endl;
        cin>>x>>y;
    }
    return 0;
}