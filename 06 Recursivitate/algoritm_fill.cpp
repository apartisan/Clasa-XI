/*
*/

#include <iostream>
using namespace std;
int m,n,x,y, a[10][10];
 void alg_fill(int x, int y, int a[10][10], int v){
    if (!a[x][y]){
        a[x][y] = v;
        alg_fill(x+1,y,a,v);
        alg_fill(x,y+1,a,v);
        alg_fill(x-1,y,a,v);
        alg_fill(x,y-1,a,v);
    }
 }
 //metoda a doua
 const int di[]={-1,0,1,0},
           dj[]={0,1,0,-1};
 void fill2(int x, int y, int a[10][10], int v){
    if (x >=1&& x<=m && y>=1 && y <=n && a[x][y]==0){
        a[x][y] = v;
        for (int k=0; k<4; k++)
            fill2(x+di[k], y+dj[k],a,v);
    }
 }


int main(){

  cin>>m>>n;
  //citire matrice
  for (int i=1; i<=m; i++)
    for(int j=1; j<=n; j++)
        cin >> a[i][j];
//  //bordare
//  for (int i=1; i<m; i++){
//    a[0][i] = 1;
//    a[m+1][i] = 1;
//  }
//  for (int i=1; i<m; i++){
//    a[i][0] = 1;
//    a[i][n+1] = 1;
//  }
  cout<< "Dati coordonatele x si y: ";
  cin>>x>>y;
  //alg_fill(x,y,a,2);
    fill2(x,y,a,3);
  //afisare matrice
  for (int i=1; i<=m; i++){
    for(int j=1; j<=n; j++)
        cout << a[i][j] << " ";
        cout<<endl;
  }

return 0;
}
