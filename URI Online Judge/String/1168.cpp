#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin>>n;
    for (int i=0; i <n;i++){
        string v;
        long hasil =0;
        cin>>v;
        for(int j = 0; j <= v.length(); j++)
        {
            switch (v[j]){
                case '1': hasil +=2; break;
                case '2': hasil +=5; break;
                case '3': hasil +=5; break;
                case '4': hasil +=4; break;
                case '5': hasil +=5; break;
                case '6': hasil +=6; break;
                case '7': hasil +=3; break;
                case '8': hasil +=7; break;
                case '9': hasil +=6; break;
                case '0': hasil +=6; break;
            }
        }
        cout<<hasil<<" leds"<<endl;
    }
    return 0;
}
