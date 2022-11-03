#include <iostream>
#include <cstring>
using namespace std;

//int main(){
//    char s[20];
//    strcpy(s,"1b2d3");
//    s[2] = 'a'+2;
//    strcpy(s,s+1);
//    strcpy(s+3,s+4);
//    cout <<s;
//}
/* ****************************** */
//
//
//int main(){
//    char s[30];
//
//    strncpy(s,"informatica",strlen("2022"));
//    s[strlen("2022")] = '\0';
//    strcat(s,"BAC");
//    cout<<s;
//}
/* ****************************** */

//problema 2021 bac, var 4
int main(){
    char s[20];
    int i,j, aux;
    strcpy(s,"ROMANIA");
    i=strlen(s)-1;
    for(j=3;j>=0;j--){
        aux=s[i];
        s[i]=s[i-j];
        s[i-j]=aux;
        i=i-j;
    }
    cout<<s;
}
