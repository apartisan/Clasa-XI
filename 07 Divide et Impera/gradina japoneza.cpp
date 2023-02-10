#include <iostream>
using namespace std;
int x,y,L,l,xp[20],yp[20], aria, ariaMax=0,n;
int xf, yf, Lf, lf;

void gradinaJaponeza(int x, int y, int L, int l, int &xf,
                     int &yf, int &Lf, int &lf, int xp[20],
                     int yp[20]){
     int gasit = 0;
     int i=0;
     while (i < n && !gasit)
        if(xp[i]>x && xp[i]<x+L && yp[i]>y && yp[i]<y+l)
            gasit = 1;
        else
            i++;
    if (gasit)
        gradinaJaponeza(x,y,x+xp[i],y+l, xf,yf,Lf, lf, xp, yp);
        gradinaJaponeza(x+L-xp[i],y,x+L,y+l, xf,yf,Lf, lf, xp, yp);
        gradinaJaponeza(, xf,yf,Lf, lf, xp, yp);
        gradinaJaponeza(, xf,yf,Lf, lf, xp, yp); //nu merge, de ce??

}

int main(){
    cout<<"Numarul de pietre: ";
    cin >> n;
    cout<<"Dati coordonatele punctelor (x y): ";
    for(int i=0; i<n; i++)
        cin >>xp[i] >> yp[i];
    cout << "Dati lungimea L si latimea l: ";
    cin >>L>>l;
    gradinaJaponeza(0,0,L,l,xf,yf,Lf,lf, xp,yp);
    cout<<"Suprafata maxima este de la coordonata ("<< xf <<", "<<yf<<
            ") la coordonata ("<<Lf<<", "<<lf <<")";




return 0;
}
