/*

*/

#include <iostream>
using namespace std;

int main(){
   int m[]={1,2,3};
   int S=5;
   int a[100][100];
   int lungime=sizeof(m) / sizeof(int);
   for(int i=0;i<lungime;i++)
        a[i][0]=1;
   for (int i=0; i<lungime;i++){
        for (int j=1; j<=S;j++){
            if (m[i]>j)
                a[i][j]= a[i-1][j];
            else
                a[i][j] = a[i-1][j] + a[i][j-m[i]];
   }}

   for(int i=0; i<lungime;i++){
    for (int j=0; j<=S;j++)
        cout << a[i][j]<<" ";
   cout<<endl;
}
   cout << a[lungime-1][S]<<" ";
return 0;
}
