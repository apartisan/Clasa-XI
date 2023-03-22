#include <iostream>
#define I 65787
using namespace std;
int muchie[9][3]={  {1,2,25},
                    {1,6,5},
                    {2,3,9},
                    {2,7,6},
                    {3,4,10},
                    {4,5,12},
                    {5,7,16},
                    {5,6,18},
                    {7,4,11}
                };
int multime[8]={-1};
int inclus[9]={0};
int solutie[2][6];

void unire(int u, int v){
    if (multime[u]<multime[v]){
        multime[u]+= multime[v];
        multime[v]=u;
    }
    else{
        multime[v] += multime[u];
        multime[u] = v;
    }
}
int cautaRad(int u){
    int x = u, v=0;
    while (multime[x]>0)
        x = multime[x];

    while (u != x){
        v = multime[u];
        multime[u] = x;
        u=v;
    }
    return x;
}
int main(){
    int u=0, v=0, i,j,k=0, minim = I, n=9;
    i=0;
    while (i<6){
        minim = I;
        for (j = 0;j<n; j++){
            if (inclus[j]==0 && muchie[i][j]<minim){
                u = muchie[j][0];
                v = muchie[j][1];
                minim = muchie[j][2];
                k=j;
            }
        }
        if (cautaRad(u) != cautaRad (v)){
            solutie[0][i] = u;
            solutie [1][i] = v;
            unire (cautaRad(u), cautaRad(v));
            inclus[k] = 1;
            i++;
         //   cout << u<<" " << v<<" " <<cautaRad(u)<<" " << cautaRad(v)<<endl;
        }
        else{
            inclus[k] = 1;
        }
    }
    cout << " Arborele de cost minim este: ";
    for( i=0; i<6; i++)
        cout << solutie[0][i] << " - " << solutie[1][i]<<" "  ;

    return 0;
}

