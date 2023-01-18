
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin ("mat_adiac.in");
int a[20][20];
int main(){
    int n,i,j;
    //generare matrice
    fin>>n;
    while (fin>>i>>j)
        a[i][j] = a[j][i] =1;

   //afisare
    for (i=1; i<=n;i++){
        for(j=1;j<=n; j++)
            cout<<a[i][j]<<" ";
        cout<<endl;
    }

return 0;
}
