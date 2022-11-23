#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
struct  persoana{
     char nume[20];
     int an_nastere;
     int inaltime;
}C,D; //C, D sunt persoane cu raspandire globala

int main(){
    persoana A,B;  //A,B sunt persoane cu raspandire locala
    strcpy(A.nume,"Bogdan"); //citire hard code
//  cin>>A.nume; //pt un cuvant
    cin.get(B.nume,50); //pt mai multe cuvinte
    A.inaltime = 188;
    B.an_nastere= 1992;
    A.an_nastere = 1982;
    B.inaltime=190;
    cout<<"Diferenta de varsta este "<< abs(A.an_nastere - B.an_nastere)<<" ani";
    cout<<endl<< "Diferenta de inaltime este "<<abs(A.inaltime-B.inaltime)<<" cm";


    return 0;
}
