#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i = 0; i < n; i++)    {
        string s1;
        string s2 = "";
        cin>>s1;
        int x;
        cin>>x;
        for(int j = 0; j < s1.length(); j++){
            int c = ((int) s1[j]) - x;
            if(c < 65)
                c = c + 26;
            s2 = s2+(char)(c);
        }
        cout<<s2<<endl;
    }
    return 0;
}
 