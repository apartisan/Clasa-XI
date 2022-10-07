#include <iostream>
#include <stdlib.h>
using namespace std;
int n,i,j,sol[10],a[10][10];
bool valid(int k){
    for (int i=1;i<k;i++)
        if(sol[k]==sol[i] && a[i][k]==1)
            return false;
    return true;
}

void Back(int k){
    int i;
    if (k==n+1){
        for(int i=1;i<=n;i++)
            cout<<sol[i];
        exit(EXIT_SUCCESS);
    }
    else
    for(i=1;i<=4;i++){
        sol[k] = i;
        if (valid(k))
            Back(k+1);
    }
}
int main(){
    cin >> n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            cin >>a[i][j];
    Back(1);
}

