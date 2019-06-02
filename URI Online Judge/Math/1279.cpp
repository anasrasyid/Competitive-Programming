#include <bits/stdc++.h>
using namespace std;
bool isLeap(string s, int len){
    if(len < 6){
        long x = stol(s,nullptr,10);
        return (x % 4 == 0 && x % 100 != 0) || (x % 400 == 0);
    }
    int x = (s[len - 1] - '0') + (s[len - 2] - '0')*10;
    int y = (s[len - 3] - '0') + (s[len - 4] - '0')*10;
    bool is100 = (s[len - 1] == '0') && (s[len - 2] == '0');
    return (x % 4 == 0 && !is100) || (y % 4 == 0 && is100);
}
bool isHulucu(string s, int len){
    int tmp = 0;
    for(char x : s)
        tmp += (x - '0');
    if(tmp % 3 == 0 && (s[len - 1] == '0' || s[len - 1] == '5'))
        return true;
    return false;
}
bool isBulucu(string s, int len){
    int tmp = 0;
    int cek = -1;
    for(char x : s){
        tmp += cek*(x - '0');
        cek  = cek*-1;
    }
    if(tmp % 11 == 0 && (s[len - 1] == '0' || s[len - 1] == '5'))
        return true;
    return false;
}
int main(){
    string x;
    getline(cin,x);
    while(true){
        int len  = x.length();
        bool leap = isLeap(x,len);
        bool hulucu = isHulucu(x,len);
        if(leap)
            cout<<"This is leap year."<<endl;
        if(hulucu)
            cout<<"This is huluculu festival year."<<endl;
        if(leap && isBulucu(x,len))
            cout<<"This is bulukulu festival year."<<endl;
        if(!hulucu && !leap)
            cout<<"This is an ordinary year."<<endl;
        if(getline(cin,x))
            cout<<endl;
        else
            break;
    }
    return 0;
}