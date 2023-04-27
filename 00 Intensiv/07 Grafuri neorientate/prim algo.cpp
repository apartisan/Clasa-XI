#include <iostream>
#define I 100
using namespace std;
int cost[8][8]={{I,I,I,I,I,I,I,I},
                {I,I,25,I,I,I,5,I},
                {I,25,I,12,I,I,I,10},
                {I,I,12,I,8,I,I,I},
                {I,I,I,8,I,16,I,14},
                {I,I,I,I,16,I,20,18},
                {I,5,I,I,I,20,I,I},
                {I,I,10,I,14,18,I,I},
                },
    apropiat[8]={I,I,I,I,I,I,I,I},
     fvtri9
int main(){
    int i,j,k, u,v, n=7,
        minim = I;
        for (i=1; i<=n;i++){
            for(j=i; j<=n; j++){
                if (cost[i][j]< minim){
                    minim = cost[i][j];
                    u=i;
                    v=j;
                }
            }
        }
 t[0][0] = u;
 t[1][0] = v;
 apropiat[u] = apropiat[v] = 0;
 for(i=1; i<=n;i++){
    if((cost[i][u]<cost[i][v]) && apropiat[i]!= 0)
        apropiat[i] = u;
    else if (apropiat[i]!= 0)
        apropiat[i] = v;

 }

 for(i=1; i<n-1; i++){
    minim = I;
    for(j=1;j<=n; j++){
        if(apropiat[j]!=0 && cost[j][apropiat[j]]<minim){
            minim = cost[j][apropiat[j]];
            k=j;
        }
    }
    t[0][i]=k;
    t[1][i] = apropiat[k];
    apropiat[k]=0;
    for(j=1; j<=n; j++){
        if(apropiat[j]!=0 && cost[j][k]<cost[j][apropiat[j]])
            apropiat[j] = k;
    }
 }

    for(i=0;i<2;i++){
        for (j=0; j<n-1; j++ )
        cout<< t[i][j];
    cout<<endl;}

}
