/* Problema labirintului / rat maze
Un soricel este intr-un labirint de forma dreptunghiulara cu
m linii si n coloane
Peretii sunt marcati cu 0, iar culoarele cu 1
Stim coordonatele initiale ale soricelului Li, Ci
Sa se determine toate posibilitatile pe care le are soricelul
pentru a iesi din labirint. Lf, Cf
NOTA: Soricelul se poate misca in 4 directii: N, S, E, V
*/
#include <iostream>
#include<fstream>
using namespace std;
ifstream fin("labirint.in");
/* Pasi:
    1. Citire matrice din fisier
        a. 1 linie - dimensiunea matricei
        b. 2 linie - coordonatele de pornire
        c. 3 linie - coordonatele finale
        d. matricea
    2. Afisare matrice
    3. Afisare solutie (tipar)
    4. Rezolvarea backtracking / labirint
*/
int m,n;
int Li, Ci, Lf, Cf;
int labirint[100][100];
const int dx[] = {0,1,0,-1};
const int dy[] = {1,0,-1,0};
void citire_date(){
    fin>>m>>n;
    fin>>Li>>Ci;
    fin >> Lf>>Cf;
    for (int i=0; i<m; i++)
        for (int j=0; j<n; j++)
            fin>>labirint[i][j];
}
void afisare(){
        for (int i=0; i<m; i++){
            for (int j=0; j<n; j++)
                cout<<labirint[i][j]<<" ";
            cout<<endl;
        }
        cout <<endl;
}
bool solutie(int i,int j){
    return (i==Lf && j==Cf);
}

bool eValid(int i, int j){
        if(i>=0 && i<m && j>=0 && j<n && labirint[i][j]==1)
            return true;
    return false;
}
void rezolva_labirint(int i,int j, int k){
    if (solutie(i,j))
        afisare();
    else{
            for (int l=0; l<4;l++){
                int i_vecin = i+dx[l];
                int j_vecin = j+dy[l];
                if (eValid(i_vecin,j_vecin)){
                    labirint[i_vecin][j_vecin] = 2;
                    rezolva_labirint(i_vecin,j_vecin, k+1);
                    labirint[i_vecin][j_vecin] = 1;
                }
            }

    }
}



int main(){
    citire_date();
    afisare();
    rezolva_labirint(Li,Ci,1);
    return 0;
}
