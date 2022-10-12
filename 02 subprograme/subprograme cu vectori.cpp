#include <iostream>
using namespace std;
int dubleaza(int nr){
    nr = nr*2;
    return nr;
}

void transforma(int n, int x[]){
    for (int i=0; i<n;i++)
        x[i] = dubleaza(x[i]);
}

void afiseaza(int n, int x[]){
    for(int i=0; i<n; i++)
        cout << x[i] << " ";
}

int main(){
    int n, a[10];
    cin>>n;
    for (int i=0; i<n; i++)
        cin >>a[i];
    transforma(n,a);
    afiseaza(n,a);
}
