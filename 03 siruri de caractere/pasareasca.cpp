/*
Limba pasareasca
De cate ori dai de o vocala, inlocuiesti cu vocala, litera p si iarasi
vocala
ex. i -> ipi; o -> opo
*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char sir[30];
    char vocale[]="aeiou";
    cin.get(sir,30);
    int i=0;
    while (sir[i]!='\0'){
        if (strchr(vocale,sir[i])){
            cout<<sir[i]<<"p"<<sir[i];
        }
        else
            cout <<sir[i];
        i++;
    }

return 0;
}
