// #4184 Bac 2022
#include <iostream>
#include <cstring>
using namespace std;
void FNume(char s[], char id[]){
    strcpy(id, strchr(s,' ')+1);
    strcat(id,"2022");
}
int main(){
    char id[50];
    FNume("David Popovici", id);
    cout<<id;
}
