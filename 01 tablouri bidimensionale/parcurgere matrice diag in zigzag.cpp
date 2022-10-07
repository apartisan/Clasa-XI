#include <iostream>
using namespace std;
int main () {
    int n,m,i,j,k;
    bool sus=true;
    char  mat[10][10];
    cout<<"m= ";
    cin>>m;
    cout<<"n= ";
    cin>>n;
    for(i=0;i<m;i++)
      for(j=0;j<n;j++)
        cin>>mat[i][j];
    i=0; j=0;
    while(i<m && j<n){
        if (sus){
            while(i>0 && j<n-1){
                cout<< mat[i][j];
                i--;
                j++;
                cout<<mat[i][j];
                if (j==n-1)
                    i++;
                else
                    j--;
            }
        }
        else{
            while(j>0 && i<m-1){
                cout<<mat[i][j];
                i++;
                j--;
                cout<<mat[i][j];
                if (i==m-1)
                    j++;
                else
                    i--;

            }
        sus!=sus;
        }

    }

}
