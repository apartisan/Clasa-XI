/*

*/

#include <iostream>
using namespace std;
int sol[100][3], t[10][10],m,n,i,j,lin,col;
void afisare(int k){
    cout<<"Solutie "<< endl;
    for(i=1; i<=k-1;i++)
        cout<<sol[i][1]<<" " <<sol[i][2]<<endl;
}

void Back(int k, int lin, int col){
    if (lin==0 || lin==m+1 || col==0 || col == n+1)
        afisare(k);
    else{
        sol[k][0]=0;
        sol[k][1]=lin;
        sol[k][2] = col;
        while(sol[k][0]<4){
            sol[k][0]++;
            switch(sol[k][0]){
            case 1:
                if (t[lin-1][col]< t[lin][col])
                    Back (k+1, lin-1, col);
                break;
            case 2:
                if (t[lin][col+1]< t[lin][col])
                    Back (k+1, lin, col+1);
                break;
            case 3:
                if (t[lin+1][col]< t[lin][col])
                    Back (k+1, lin+1, col);
                break;
            case 4:
                if (t[lin][col-1]< t[lin][col])
                    Back (k+1, lin, col-1);
                break;
            }
        }
    }
}

int main(){
    cin>>m>>n;
    for(i=1; i<=m;i++)
        for(j=1;j<=n;j++)
            cin >>t[i][j];
    cin>> lin>>col;
    Back(1,lin,col);


return 0;
}
