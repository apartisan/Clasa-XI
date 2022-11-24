#include <iostream>
using namespace std;
struct Data{
    int zi,luna,an;
};
struct Persoana{
    char nume[50];
    int inaltime;
    Data data_nasterii;
};

int main(){
    Persoana A,B;
    cout<<"Dati numele celor doua persoane ";
    cin>>A.nume>>B.nume;
    cout <<"Dati inaltimea primei persoane ";
    cin>>A.inaltime;
    cout <<"Dati data nasterii celei de a doua persoane (an luna zi): ";
    cin>>B.data_nasterii.an;
    cin>>B.data_nasterii.luna;
    cin>>B.data_nasterii.zi;
    cout <<"Dati data nasterii primei persoane (an luna zi): ";
    cin>>A.data_nasterii.an;
    cin>>A.data_nasterii.luna;
    cin>>A.data_nasterii.zi;

    cout<<A.nume<<'\t'<<A.data_nasterii.zi<<"-"<<A.data_nasterii.luna;
    cout <<"-"<<A.data_nasterii.an<<'\t'<< A.inaltime;
return 0;
}
