#include <iostream>
using namespace std;

long fak(int n){
    if(n == 1)
        return 1;
    return n*fak(n-1);
}

int main()
{
    long long n;
    cin>>n;
    while(n != 0){
        int hasil =0;
        int i = 0;
        while(n > 0){
            int a = n % 10;
            i++;
            hasil = hasil + a*fak(i);
            n = n /10;
        }
        cout<<hasil<<endl;
        cin>>n;
    }
    return 0;
}
