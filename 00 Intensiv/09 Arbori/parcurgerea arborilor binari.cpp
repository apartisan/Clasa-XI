#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("arb_bin.in");
int i, n, st[50], dr[50];
void citire(){
    fin >>n;
    for(i=1;i<=n;i++)
        fin>>st[i];
    for(i=1;i<=n;i++)
        fin>>dr[i];
}
void SRD(int nod){
    //inordine
    if (nod){
        SRD(st[nod]);
        cout<<nod;
        SRD(dr[nod]);
    }
}
void RSD(int nod){
    //preordine
    if (nod){
        cout<<nod;
        RSD(st[nod]);
        RSD(dr[nod]);
    }
}
void SDR(int nod){
    //postordine
    if (nod){
        SDR(st[nod]);
        SDR(dr[nod]);
        cout<<nod;
    }
}
int main(){
    citire();
    SRD(1);
    cout<<endl;
    RSD(1);
    cout<<endl;
    SDR(1);

return 0;
}
