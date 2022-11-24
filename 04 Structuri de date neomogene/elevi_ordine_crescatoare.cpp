/*  Se citesc datele despre elevii unei clase, respectiv numele si
    data nasterii.
    Sa se ordoneze elevii in ordinea crescatoare dupa data nasterii
    si sa se afiseze aceasta situatie.
*/
#include <iostream>
using namespace std;
struct data{
    int zi,luna,an;
};
struct elev{
    char nume[50];
    data data_nasterii;
}elevi[30];
int main(){
    int n;
    elev aux;
    cin>>n;
    for(int i=0; i<n; i++){
        cin.get();
        cin.get(elevi[i].nume,50);cin.get();
        cin>>elevi[i].data_nasterii.zi;
        cin>>elevi[i].data_nasterii.luna;
        cin>>elevi[i].data_nasterii.an;
    }
    for (int i=0;i<n-1;i++)
        for(int j=i+1;j<n;j++)
         if(elevi[i].data_nasterii.an > elevi[j].data_nasterii.an){
            aux = elevi[i];
            elevi[i]= elevi[j];
            elevi[j] = aux;}
         else if( elevi[i].data_nasterii.an==elevi[j].data_nasterii.an)
                if(elevi[i].data_nasterii.luna>elevi[j].data_nasterii.luna){
                    aux = elevi[i];
                    elevi[i]= elevi[j];
                    elevi[j] = aux;}
                else if( elevi[i].data_nasterii.luna==elevi[j].data_nasterii.luna)
                    if(elevi[i].data_nasterii.zi>elevi[j].data_nasterii.zi){
                        aux = elevi[i];
                        elevi[i]= elevi[j];
                        elevi[j] = aux;}

    for(int i=0; i<n; i++){
        cout<<elevi[i].nume<<" "<<elevi[i].data_nasterii.zi<<".";
        cout << elevi[i].data_nasterii.luna<<"."<<elevi[i].data_nasterii.an<<endl;}

return 0;
}
