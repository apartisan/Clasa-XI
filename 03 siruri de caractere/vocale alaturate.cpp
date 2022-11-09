// Programul citeste de la tastatura o propozitie de max 100 caractere
// si transforma in memorie astfel incat sa nu existe doua vocale
// pe pozitii alaturate. Cuvintele sunt separate prin unul sau mai multe
//spatii
// ex: oaia aceea e foarte blanda
// rezultat: o ace e forte blanda
 #include <iostream>
 #include <cstring>
 using namespace std;
 int main(){
    char s[100];
    cin.get(s,100);
    for (int i=0; i<strlen(s);i++)
        if (strchr("aeiou", s[i])&& strchr("aeiou",s[i+1]))





 }
