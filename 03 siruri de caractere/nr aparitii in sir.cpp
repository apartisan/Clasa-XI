//Sa se afiseze numarul de aparitii a unui caracter in sir
//si indicii pe care se afla acest caracter
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char sir[20], c, *temp;
    int cnt=0;
    cout<< "Dati sirul de caractere ";
    cin.get(sir,20);
    cout <<"Caracterul pe care il cautati este ";
    cin>>c;
    temp = sir;
    do{
            temp++;
            temp=strchr(temp,c);
            if (temp){
                cnt++;
                cout <<"Indicicele "<<cnt<<" este c" <<temp-sir<<endl;

            }
    }while (temp);
    cout <<"Nr. de aparitii este "<<cnt;



}
