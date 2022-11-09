#include <iostream>
#include <cstring>
using namespace std;

int main(){
    //ce se afiseaza dupa ce rulam urmatorul program?
    char s[50],t[50];
    int i;
//    strcpy(s,"ELITIST");
//    for (i=2;i<6;i++)
//        if(i%2==0)
//            s[i] = s[0];
//        else
//            s[i] = s[1]+i/2;
//    cout<< s;
//

    // inlocuiti {O,A,U} cu *
//    strcpy(s,"CALCULATOARE");   //  C*LC*L*T**RE
//    for (i=0; i<strlen(s);i++)
//        if (strchr("OAU", s[i]))
//            cout<<"*";
//        else
//            cout<< s[i];

     //ce afiseaza?
//      strcpy(s,"bac2023");
//      cout<<s+3<<endl;
//      for (i=0; i<strlen(s);i++)
//            if (strchr("0123456789",s[i])==0)
//                cout<<s[i]<<'!';

    // ce afiseaza?
    strcpy(s,"vorbeste");
    s[3]=s[0];
    s[5] = s[2];
    s[0] = s[1]+1;
    s[2] = s[1]-2;
    s[6] = s[4]-1;
    strcpy(t,s);
    t[3] = '\0';
    cout<<t<<endl<<s+3;

}
