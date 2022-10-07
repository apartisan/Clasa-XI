#include <iostream>
using namespace std;
int main(){
int mat[10][10],a[10],i,j,l,k, m,n;
     cout<<"Marimea matricei m x n: ";
     cin >> m >>n;
     cout << "Elementele matricei: ";
for(i=0;i<m;i++)
    for (j=0;j<n;j++)
        cin >> mat[i][j];
    cout <<"Elementele vectorului ";
for (i=0;i<n;i++)
    cin >> a[i];
cout <<"Linia de inlocuit: ";
cin >> l;

for(i=0;i<m;i++){
    if(i==l){
            m++;
        for(k=m-1;k>l;k--)
            for(j=0;j<n;j++)
                mat[k][j] = mat[k-1][j];
        for(j=0;j<n;j++)
            mat[l][j] = a[j];
    }

}

 for(i=0;i<m;i++){
    for (j=0;j<n;j++)
        cout<< mat[i][j]<<" ";
    cout<<endl;}

    return 0;
}
