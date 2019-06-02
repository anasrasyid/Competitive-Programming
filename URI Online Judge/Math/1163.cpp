#include <bits/stdc++.h>
using namespace std;
#define gravity 9.80665
#define phi 3.14159

int main(){
    double h;
    while(cin>>h){
        int p1, p2;
        cin >> p1 >> p2;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            double alpa,v;
            cin >> alpa >> v;
            alpa = alpa*phi/180;
            double a = 0.5 * gravity;
            double b = -(v*sin(alpa));
            double c = -h;
            double d = b*b - (4*a*c);
            double t = max(-b + sqrt(d), -b - sqrt(d))/(2*a);
            double x = v*cos(alpa)*t;
            cout << fixed << setprecision(5) << x << " -> ";
            if(x >= p1 && x <= p2)
                cout<<"DUCK"<<endl;
            else 
                cout<<"NUCK"<<endl;
        }
    }
    return 0;
}