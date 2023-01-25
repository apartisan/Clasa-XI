#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("list_adiac.in");
 int n,i,j,k=0,aux;
    int start[50], t[2][100];
int main(){

    //citire fisier
    fin>>n;

    while (fin>>i>>j){
        k++;
        t[0][k]=j;
        t[1][k] = start[i];
        start[i] = k;
        k++;
        t[0][k] = i;
        t[1][k] = start[j];
        start[j] = k;
    }

    for (i=1; i<=n;i++){
        cout<< "Noduri adiacente cu "<< i<< endl;
        aux = start[i];
        while (aux != 0){
            cout<< t[0][aux]<<" ";
            aux = t[1][aux];
        }
        cout<<endl;
    }
return 0;
}
