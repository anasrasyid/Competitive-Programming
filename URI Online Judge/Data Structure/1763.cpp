#include <iostream>
using namespace std;
int main(){
    string s;
    string negara[24] = { "estados-unidos", "inglaterra", "australia", "antardida", "canada", "portugal", "brasil", "argentina", "chile", "mexico", "espanha", "italia", "libia", "siria", "marrocos", "alemanha", "austria", "coreia", "grecia", "irlanda", "belgica", "japao", "suecia", "turquia" };
    string kata[24] = { "Merry Christmas!", "Merry Christmas!", "Merry Christmas!", "Merry Christmas!", "Merry Christmas!", "Feliz Natal!", "Feliz Natal!", "Feliz Navidad!", "Feliz Navidad!", "Feliz Navidad!", "Feliz Navidad!", "Buon Natale!", "Buon Natale!", "Milad Mubarak!", "Milad Mubarak!", "Frohliche Weihnachten!", "Frohe Weihnacht!", "Chuk Sung Tan!", "Kala Christougena!", "Nollaig Shona Dhuit!", "Zalig Kerstfeest!", "Merii Kurisumasu!", "God Jul!", "Mutlu Noeller"};
    while(getline(cin,s)){
        int i = 0;
        while(i < 23 && negara[i] != s)
            i++;
        if(negara[i] == s)
            cout<<kata[i]<<endl;
        else 
            cout<<"--- NOT FOUND ---"<<endl;
    }
    return 0;
}