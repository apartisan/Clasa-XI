//1. Suma elementelor de pe diagonala principala
//2. Suma elementelor de pe diagonala secundara
//3. Suma elementelor aflate sub diagonala principala
//4. Suma elementelor aflate deasupra diagonale secundare

#include <iostream>
using namespace std;
int main(){
    int mat[10][10], i, j, s1, s2, s3, s4, m, n;
    //citire marime matrice
    cout<<"Dati matricea m x n";
    cin>>m>>n;

    //citire elemente matrice
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            cin>>mat[i][j];
        }
    }

    //calcul problema 1
    s1=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                if(i==j){
                    s1=s1+mat[i][j];
                }
        }
    }
    cout<<s1;
    //problema 3
    s2=0;
    for(i=0;i<m;i++){
        for(j=0;j<i;j++){
                      s2=s2+mat[i][j];

        }
    }
    cout<<s2;
    //problema 4
    s4=0;
    for(i=0;i<m;i++){
        for(j=0;j<n-i-1;j++){
                s4=s4+mat[i][j];
                }
    }
    cout<<s4;
    //problema 2
    s3=0;
    for(i=0;i<m;i++){
        for(j=0;j<n-i-1;j++){
                if(i==j){
                s4=s4+mat[i][j];
                }
        }
    }
    cout<<s3;




return 0;
}
