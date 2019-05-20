#include <iostream>
using namespace std;

bool visit[5][5];

bool cek(int rute[5][5],int x, int y){
    if(x == 4 && y == 4)
        return true;
    if (rute[x][y] == 1 || x > 4 || y > 4 || x < 0 || y < 0)
        return false;
    if(!visit[x][y])
        return false;
    visit[x][y] = false;
    return cek(rute,x+1,y) || cek(rute,x,y+1) || cek(rute,x-1,y) || cek(rute,x,y-1);
}

int main(){
    int t;
    cin>>t;
    while(t > 0){
        int rute[5][5];
        for(int i = 0; i < 5; i++)
            for(int j = 0; j < 5; j++){
                cin>>rute[i][j];
                visit[i][j] = true;
            }
        if(cek(rute,0,0))
            cout<<"COPS"<<endl;
        else 
            cout<<"ROBBERS"<<endl;
        t--;
    }
    return 0;
}