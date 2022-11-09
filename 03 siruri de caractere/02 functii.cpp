#include <iostream>
#include <cstring>
#include <stdlib.h>
using namespace std;

int main(){
 // strlen (*sursa) - afla lungimea unui sir
// char sir[20],sir2[20], c;
// int cnt=0;
// cin.get(sir,20);
 //cout<< strlen(sir);
 //cin.get();
 //********************************************
 // CONCATENARE - strcat(*dest, *sursa)  -adauga sirul
 //                 destinatie sirului sursa.
// cin.get(sir2,20);
// strcat(sir, " ");
// strcat(sir, sir2);
// cout<< sir<<'\t';
//*****************************************
 //strcpy (*dest,*sursa) - copiaza sirul din sursa la sirul
                        // din destinatie

// strcpy(sir,sir2);
// cout << sir<<'\t';
// cout <<sir2;
//***************************************
  //strncat(*dest, *sursa, nr) - copiaza nr de caractere din sirul
                              // sursa in sirul destinatar
 // sir "Acesta este"
 // sir2 "un curs de info"
// strcat(sir," ");
// strncat(sir, sir2, 8);
// cout << sir<<endl; //Acesta este un curs

  //******************************
  //cautarea unui caracter intr-o propozitie
  // programare fara functii, DE CATE ORI APARE CARACTERUL
  //  cin>>c;
//    for (int i=1; i<strlen(sir);i++)
//        if (sir[i]==c){
//            //cout << "gasit";
//            cnt++;
//            }
//    cout << cnt;

  // cautarea e facuta de la stanga la dreapta.
  // daca "c" este gasit, returneaza prima aparitie gasita
  // strchr(*sursa, caracter)
   //cout <<strchr(sir,'t')-sir;

  // strrchr (*sursa, caracter)  - returneaza ultima aparitie gasita
  // returneaza prima aparitie facuta de la dreapta la stanga
//    cout <<strchr(sir, c)-sir<<endl;
//   cout << strrchr(sir, c)-sir;

   // strcmp (*sir1, *sir2) - compara 2 siruri si returneaza
   //                           <0, daca sir1< sir2
   //                           =0, daca sir1 = sir2
   //                           >0, daca sir1 > sir2
   // case sensitive "soare" > "SOARE"
   // stricmp(*sir1, *sir2) - nu face distinctie intre
                            // litere mari si mici

 //   cout << strcmp(sir, sir2);

  //  strstr(*s1, *s2) - identifica daca s2 este subsir a s1
   // returneaza adresa de inceput de la s1
// char s1[20], s2[20];
// cin.get(s1,20);
// cin.get();
// cin.get(s2,20);
//
// cout<< strstr(s1,s2);
//

// un program care sterge toate aparitiile subsirului citit
//dintr-un alt sir

// char sir[100], subsir[25], *p;
// int lungime;
// cin.get(sir,100);
// cin.get();
// cin.get(subsir,25);
// lungime = strlen(subsir);
// p = strstr(sir,subsir);
// while (p){
//    strcpy(p,p+lungime);
//    p = strstr(p,subsir);
// }
// cout<<sir;

 // strtok (*s1,*sep) - desparte in cuvinte
 //  sep {, .!}

//  char s1[]={"mama, ta?ta si sora"};
//  char sep[]={", ?"} ;
//  char *p;
//  p = strtok(s1,sep);
//  while (p){
//     cout << p<<endl;
//     p = strtok(NULL, sep);
//  }

// strspn( *s1,*s2) - returneaza nr de caractere s1
                 //   care se regasesc in s2
                  //  caracterele trebuie sa fie consecutive

//  char s1[]={"AB3def"};
//  char s2[]={"16A32BF"} ;
//  cout << strspn(s1,s2);

// char cuvant[30];
// char cifre[11]="0123456789";
// cin >>cuvant;
// if (strspn(cuvant,cifre) == strlen(cuvant))
//    cout << "este cuvant ";
// else
//    cout <<" nu este cuvant";

    // int atoi(sir)  - converteste un sir catre tipul int
    // daca intalneste un sir alfanumeric, returneaza 0

    // itoa(int valoare,sir, int baza) - converteste o valoare
  //  de tip integer intr-un sir. Daca baza este 10, retine si semnul.

   char s[20]="1234";
   char t[20];
   int a;
   a = atoi(s)+1;
   itoa(a,t,10);


}
