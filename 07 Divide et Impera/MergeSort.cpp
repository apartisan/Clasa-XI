
#include <iostream>
using namespace std;
int v[100],n;
void sortare(int i, int j, int a[]){
    int aux;
    if (a[i]>a[j]){
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;
    }
}
void Interclasare(int p, int u, int mijl, int a[]){
    int i, j, k;
    int b[10];
    i=p;
    j=mijl+1;
    k = 0;
    while (i<=mijl && j<=u)
        if(a[i]<=a[j])
            b[k++] = a[i++];
        else
            b[k++] = a[j++];
    for( ;i<=mijl; i++)
        b[k++] = a[i];

    for( ;j<=u; j++)
        b[k++] = a[j];
    k=0;
    for(i=p; i<=u; i++){
        a[i] = b[k++];
    }
}
void MergeSort(int i, int j, int a[]){
    int mijl;
    if ((j-i)<=1)
        sortare(i,j,a);
    else{
        mijl = (i+j)/2;
        MergeSort(i, mijl, a);
        MergeSort(mijl+1, j, a);
        Interclasare(i,j,mijl, a);
    }
}

int main(){
    cin >>n;
    for(int i=0; i<n; i++)
        cin>>v[i];

    MergeSort(0, n-1, v);
    for(int i=0; i<n; i++)
        cout<< v[i] <<" ";
return 0;
}
