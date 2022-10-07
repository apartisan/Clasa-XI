#include <iostream>
using namespace std;
int m,n,a[10][10],i,j,aux;
void citeste_matrice();
void afiseaza_matrice();
void schimba_linii(int x, int y);
int main(){
    citeste_matrice();
    afiseaza_matrice();
    schimba_linii(2,3);
    afiseaza_matrice();
    return 0;
}
void citeste_matrice(){
    cout<<"Marimea matricei m x n: ";
    cin >> m >>n;
    cout << "Elementele matricei: ";
    for(i=0;i<m;i++)
        for (j=0;j<n;j++)
            cin >> a[i][j];
}
void afiseaza_matrice(){
    for(i=0;i<m;i++){
        for (j=0;j<n;j++)
            cout<< a[i][j]<<" ";
    cout<<endl;
    }
}
void schimba_linii(int x,int y){
    for(i=0; i< n     ; i++)
        aux = a[x-1][i];
        a[x-1][i] = a[y-1][i];
        a[y-1][i] = aux;
}

