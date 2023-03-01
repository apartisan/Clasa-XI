#include <iostream>
#include <queue>
#include <fstream>
using namespace std;
ifstream fin("graf_dfs.in");
queue <int>coada;
int vizitat[20];
int a[20][20],v,n;
void BFS(int nod){
    int u; //nod de explorat
    cout<<nod<<" ";
    vizitat[nod] = 1;
    coada.push(nod);
    while(!coada.empty()){
        u =coada.front();
        coada.pop();
        for(v=1; v<=n; v++)
            if (a[u][v] == 1 && vizitat[v]==0){
                cout<<v<<" ";
                vizitat[v] = 1;
                coada.push(v);
        }
    }
}

void citire_graf(){
    fin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            fin >> a[i][j];
}
void afisare_mat(){
        for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout <<  a[i][j]<<" ";
        cout<<endl;}
}
int main(){
    citire_graf();
    BFS(3);
}
