#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("graf_dfs.in");
int vizitat[20], mat[20][20],n;
void citire_graf(){
    fin >> n;
    for(int i=1; i<=n; i++)
        for(int j=1; j<=n; j++)
            fin >> mat[i][j];
}
void afisare_mat(){
        for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++)
            cout <<  mat[i][j]<<" ";
        cout<<endl;}
}

void DFS(int i){
    if (vizitat[i]==0){
        cout <<i<<" ";
        vizitat[i] = 1;
        for(int j=1; j<=n;j++)
            if(mat[i][j]==1 && vizitat[j] ==0)
                DFS(j);
    }
}

int main(){
    citire_graf();
    DFS(4);
return 0;
}
