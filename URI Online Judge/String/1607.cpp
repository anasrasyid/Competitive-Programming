#include <iostream>
#include <string>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t > 0){
        string s1,s2;
        cin>>s1>>s2;
        long long dif = 0;
        for(int i = 0; i < s1.length(); i++)
            if(s1[i] > s2[i])
                dif = dif + (int)s2[i] - (int)s1[i] + 26;
            else
                dif = dif + (int)s2[i] - (int)s1[i];
        cout<<dif<<endl;
        t--;
    }
    return 0;
}