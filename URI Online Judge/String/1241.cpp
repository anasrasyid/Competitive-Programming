#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++){
        string s1,s2;
        cin>>s1>>s2;
        bool cek = true;
        int ls1 = s1.length();
        int ls2 = s2.length();
        if (ls1 < ls2)
            cek = false;
        int j =0;
        while(cek && j < ls2){
            if(s1[ls1-j-1] != s2[ls2 -j-1])
                cek = false;
            j++;
        }
        if(cek)
            cout<<"encaixa"<<endl;
        else
            cout<<"nao encaixa"<<endl;
    }
    
    return 0;
}
