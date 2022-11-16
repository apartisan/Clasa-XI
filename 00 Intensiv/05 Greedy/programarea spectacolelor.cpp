/* Algoritm
P1. Sortam spectacolele dupa ora terminarii lor
P2. Primul spectacol programat este cel care se termina cel mai
devreme
P3. Alegem primul spectacol dintre cele ce urmeaza ultimului
care indeplineste conditia ca incepe dupa terminarea ultimului
spectacol programat
P4. Daca la P3 nu am reusit sa gasim nici un spectacol care sa
indeplineasca cerintele impuse, algoritmul se termina
    - Se programeaza spectacolul gasit la P3 si algoritmul se reia
    de la P3
*/

#include <iostream>
using namespace std;
void sortare(int s[2][10],int o[10], int n){
    int sortat, aux, i;
        do{
            sortat=1;
            for(i=1;i<n;i++)
            if(s[1][o[i]]>s[1][o[i+1]]){
                aux = o[i];
                o[i] = o[i+1];
                o[i+1] = aux;
                sortat = 0;
            }
        } while(!sortat);
}

int main(){
    int s[2][10]; //ora de start s[0][] si ora de final s[1][]
    int n,i,h1,h2,m1,m2;
    int o[10]; //nr de ordine a spectacolului

    cout<<"Dati nr de spectacole" ;
    cin>>n;

    cout<<" Dati orele de inceput si final a fiecarui spectacol:"<<endl;
    for (i=1;i<=n;i++){
        o[i]=i;
        cout<<"Ora de inceput pentru spectacolul "<<i<<" (hh mm): ";
        cin>> h1>>m1;
        s[0][i] = h1*60+m1;

        cout<<"Ora de final pentru spectacolul "<<i<<" (hh mm): ";
        cin>> h2>>m2;
        s[1][i] = h2*60+m2;
    }

    sortare(s,o,n); //sortam spectacolele s[][] dupa ora terminarii lor
    cout<<" Ordinea este: "<< o[1]<<" ";
    int ora = s[1][o[1]]; //ora de final a spectacolului care termina primul
    for (i=2;i<=n;i++)
    if(s[0][o[i]]>=ora){  //aleg primul spectacol care incepe dupa cel ales anterior
        cout<< o[i]<<" "; // afisam numarul de ordine
        ora = s[1][o[i]];

    }

    return 0;
}
