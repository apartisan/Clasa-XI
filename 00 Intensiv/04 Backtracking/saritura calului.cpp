#include <iostream>
#include <stdlib.h>
using namespace std;
const int x[8] ={-2,-2, -1, -1, 1 , 1, 2, 2} ;
const int y[8] = {1, -1, 2,-2, 2,-2, 1,-1};
int n, sol[1000][2], t[25][25];

void Back(int k, int lin, int col){
    int linie, coloana, i;
    if (k == n*n){
        for (i=1; i<=k;i++)

            cout <<sol[i][0]<<" " << sol[i][1]<<endl;
        cout<< lin <<" "<<col;
        exit(EXIT_SUCCESS);
    }
    else{
         sol[k][0] = lin;
         sol[k][1] = col;
         for(i=0;i<=7;i++){
            linie = lin + x[i];
            coloana = col + y[i];
            if (linie <= n && linie >=1
                && coloana <=n && coloana >=1
                && t[linie][coloana] == 0){
                    t[linie][coloana]= 1;
                    Back(k+1, linie, coloana);
                    t[linie][coloana]=0;
                }
         }

    }

}
int main(){
    int mat[8][8];
    cout <<"n= ";
    cin >> n;
    Back(1,1,1);

    return 0;
}
