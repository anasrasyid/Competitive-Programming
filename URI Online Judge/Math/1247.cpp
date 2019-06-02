#include <bits/stdc++.h>
using namespace std;
int main(){
    int d, vf, vg;
    while(cin>>d>>vf>>vg){
        double s = sqrt(144 + d*d);
        if(12 * vg >= s*vf)
            cout<<"S"<<endl;
        else 
            cout<<"N"<<endl;
    }
    return 0;
}