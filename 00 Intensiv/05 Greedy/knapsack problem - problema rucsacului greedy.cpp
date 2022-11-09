// problema rucsacului
// O persoana are un rucsac cu ajutorul caruia poate transporta
//o greutate maxima G. Persoana are la dispozitie n obiecte si cunoaste
// pentru fiecare obiect greutate si castigul care se obtine in
// urma transportului.
//Se cere sa se precizezse ce obiecte trebuie sa transporte persoana
//astfel incat castigul sa fie maxim.

/* PASI
1. se calculeaza pentru fiecare obiect profitul pe kg (castig/greutate)
2. se sorteaza descrescator dupa profit
3. castigul initial este zero, greutatea ramasa de incarcat va fi G.
4. atata timp cat greutatea maxima nu a fost acoperita se adauga in rucsac
obiecte
*/
#include <iostream>
using namespace std;
float castig[10], greutate[10], profit[10], obiect[10], castig_total, G;
float aux1, aux2;
int n, i;
bool sortat;
int main(){
    cout<<"Greutatea totala de transportat: ";
    cin>> G;
    cout<<"Nr. de obiecte: ";
    cin>> n;
    for(i=1; i<=n;i++){
        cout<<"castig["<<i<<"]="; cin>> castig[i];
        cout<<"greutate["<<i<<"]="; cin>> greutate[i];
        obiect[i] = i;
        profit[i] = castig[i]/greutate[i];
    }
    do{
        sortat=false;
        for(i=1; i<n;i++)
            if(profit[i]<profit[i+1]){
                aux1 = profit[i];
                profit[i] = profit [i+1];
                profit[i+1] = aux1;

                aux1 = castig[i];
                castig[i] = castig [i+1];
                castig[i+1] = aux1;

                aux1 = greutate[i];
                greutate[i] = greutate [i+1];
                greutate[i+1] = aux1;

                sortat = true;
                aux2 = obiect[i];
                obiect[i] = obiect [i+1];
                obiect[i+1] = aux2;
            }

    } while (sortat);
    i=1;
    while(G>0 && i<n){
        if(G>greutate[i]){
            cout<< "obiectul "<<obiect[i]<< " 1"<<endl;
            G-=greutate[i];
            castig_total+=castig[i];
        }
        else {
            cout<< "obiectul "<<obiect[i]<< " "<<G/greutate[i]<<endl;
            castig_total += castig[i]*G/greutate[i];
            G=0;
        }
        i++;
    }
    cout<<"Castig total= "<<castig_total;

}
