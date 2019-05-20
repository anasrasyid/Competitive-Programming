#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int c;
    cin>>c;
    for(int i = 0; i < c; i++){
        int n;
        cin>>n;
        int apa[n];
        int jumlah = 0;
        for(int j = 0; j < n; j++){
            cin>>apa[j];
            jumlah += apa[j];
        }
        float rata = (float)(jumlah)/(float)(n);
        float atas = 0;
        for(int j=0;j<n;j++)
            if(apa[j] > rata)
                atas++;
        atas = atas*100/n;
        cout<<fixed<<setprecision(3)<<atas<<"%"<<endl; 
    }
    
    return 0;
}
