/*
o fotografie alb-negru este reprezentata sub forma de matrice binara
Ea infatiseaza unul sau mai multe obiecte.
Portiunile corespunzatoare obiectelor sunt notate cu 1
Se cere sa se determine daca fotografia reprezinta unul sau mai multe
obiecte
*/
#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("tablou2.in");
int m,n,x,y, a[10][10],gasit=0;
const int di[]={-1,-1,0,1,1,1,0,-1},
           dj[]={0,1,1,1,0,-1,-1,-1};
 void umple_obiect(int x, int y, int a[10][10]){
    if (x >=0&& x<m && y>=0 && y <n &&a[x][y]==1){
        a[x][y] = 0;
        for (int k=0; k<7; k++)
            umple_obiect(x+di[k], y+dj[k],a);
    }
 }

int main(){
  fin>>m>>n;
  for (int i=0; i<m; i++)
    for(int j=0; j<n; j++)
        fin >> a[i][j];

   //afisare matrice
  for (int i=0; i<m; i++){
    for(int j=0; j<n; j++)
        cout << a[i][j] << " ";
        cout<<endl;
  }
  cout<<endl;
    //cauta 1 in matrice
//    x=0;
//    do{x++;
//        y=0;
//        do{
//            y++;
//        } while (y!=n && a[x][y]!=1);
//
//    }while (x!=m && a[x][y] !=1);
//    for (int i=0; i<m; i++)
//        for(int j=0; j<n; j++)
//            if (a[i][j] == 1)
//                umple_obiect(x,y,a);


//    for (int i=0; i<m; i++)
//        for(int j=0; j<n; j++)
//            if (a[i][j]==1)
//                gasit = 1;



  //afisare matrice
  for (int i=0; i<m; i++){
    for(int j=0; j<n; j++)
        cout << a[i][j] << " ";
        cout<<endl;
  }

    if (gasit)
        cout << "fotografie cu mai multe obiecte";
    else
        cout <<"fotografie cu un obiect";


return 0;
}
