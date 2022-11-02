#include <iostream>
#include <cstring>
using namespace std;

int main(){
 // strlen (*sursa) - afla lungimea unui sir
 char sir[20],sir2[20], c;
 int cnt=0;
 cin.get(sir,20);
 //cout<< strlen(sir);
 cin.get();
 //********************************************
 // CONCATENARE - strcat(*dest, *sursa)  -adauga sirul
 //                 destinatie sirului sursa.
 cin.get(sir2,20);
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

    cout << strcmp(sir, sir2);

}
