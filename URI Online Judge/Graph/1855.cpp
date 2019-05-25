#include <bits/stdc++.h>
using namespace std;
int main(){
    int c, r;
    cin>>c;
    cin>>r;
    char map[r][c];
    bool cek = false;
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin>>map[i][j];
            if(!cek) cek = map[i][j] == '*';
        }
    }
    if(cek){
        int x,y;
        x = y = 0;
        while (x >= 0 && x < r && y >= 0 && y < c && map[x][y] != '*'){
            if(map[x][y] == 'v'){
                map[x][y] = '.';
                while(x < r && map[x][y] == '.')
                    x++;
            }
            if(map[x][y] == '^'){
                map[x][y] = '.';
                while(x >= 0 && map[x][y] == '.')
                    x--;
            }
            if(map[x][y] == '>'){
                map[x][y] = '.';
                while(y < c && map[x][y] == '.')
                    y++;
            }
            if(map[x][y] == '<'){
                map[x][y] = '.';
                while(y >= 0 && map[x][y] == '.')
                    y--;
            }
        }
        cek = map[x][y] == '*';
    }
    if(cek) cout<<'*'<<endl;
    else cout<<'!'<<endl;
    return 0;
}