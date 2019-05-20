#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n != 0){
        int arah =0;
        char x;
        for(int i = 0;i<n;i++){
            cin>>x;
            if(x == 'D')
                arah++;
            else 
                arah--;
        }
        while(arah < 0){
            arah+=4;
        }
        arah = arah %4;
        if(arah == 0)
            cout<<"N"<<endl;
        if(arah == 1)
            cout<<"L"<<endl;
        if(arah == 2)
            cout<<"S"<<endl;
        if(arah == 3)
            cout<<"O"<<endl;
        cin>>n;
    }
    return 0;
}
