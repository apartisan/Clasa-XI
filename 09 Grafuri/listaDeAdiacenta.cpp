#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("graf.in");
int a[21], b[2][41],k,i,j, aux,n;
int main(){
    fin >>n;
    while (fin>>i>>j){
        k++;
        b[0][k] = j;
        b[1][k] = a[i];
        a[i] = k;
        k++;
        b[0][k] = i;
        b[1][k] = a[j];
        a[j]=k;
    }

    for (i=1; i<=n; i++){
        cout <<"Noduri adiacente cu "<< i<< endl;
        aux = a[i];
        while (aux != 0){
            cout <<b[0][aux]<<" ";
            aux = b[1][aux];
            cout<<endl;
        }
    }

return 0;
}
