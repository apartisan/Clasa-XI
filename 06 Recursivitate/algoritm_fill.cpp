/*
*/

#include <iostream>
using namespace std;
 void alg_fill(int x, int y, int a[10][10], int v){
    if (!a[x][y]){
        a[x][y] = v;
        alg_fill(x+1,y,a,v);
        alg_fill(x,y+1,a,v);
        alg_fill(x-1,y,a,v);
        alg_fill(x,y-1,a,v);
    }
 }


int main(){
  int m,n,x,y, a[10][10];
  cin>>m>>n;
  //citire matrice
  for (int i=1; i<=m; i++)
    for(int j=1; j<=n; j++)
        cin >> a[i][j];
  //bordare
  for (int i=1; i<m; i++){
    a[0][i] = 1;
    a[m+1][i] = 1;
  }
  for (int i=1; i<m; i++){
    a[i][0] = 1;
    a[i][n+1] = 1;
  }
  cout<< "Dati coordonatele x si y: ";
  cin>>x>>y;
  alg_fill(x,y,a,2);

  //afisare matrice
  for (int i=1; i<=m; i++){
    for(int j=1; j<=n; j++)
        cout << a[i][j] << " ";
        cout<<endl;
  }

return 0;
}
