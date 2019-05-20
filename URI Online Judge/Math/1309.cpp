#include <iostream>
#include <string>
using namespace std;
int main()
{
    string d,c;
    while(cin>>d>>c){
        long l = d.length();
        long k = l % 3;
        l = l - k;
        if(k == 0)
            k = 3;
        cout<<"$";
        for(int i = 0;i <d.length();i++){
            cout<<d[i];
            k = k-1;
            if(k == 0 && i != d.length()-1){
                cout<<",";
                k = l % 3;
                if(k == 0)
                    k = 3;
                l = l - k;
            }
        }
        cout<<".";
        if(c.length() == 1)
            cout<<"0";
        cout<<c<<endl;
    }
    return 0;
}
