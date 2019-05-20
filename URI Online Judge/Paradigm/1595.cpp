#include <iostream>
#include <vector>
#include <iomanip>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t > 0){
        long long s,c,r;
        cin>>s>>c>>r;
        vector<long long> apa;
        for(long long i = 0; i < s; i++){
            long long tmp;
            cin>>tmp;
            apa.push_back(tmp);
        }
        sort(apa.begin(), apa.end());
        double hasil = 0;
        for(int i = 0; i < s; i++){
            double x = apa[i];
            if(c > 0){
                x += r;
                c--;
            }
            hasil += 1/x;
        }
        cout<<fixed<<setprecision(2)<<hasil<<endl;
        t--;
    }
    return 0;
}