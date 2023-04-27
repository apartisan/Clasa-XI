#include <iostream>
#include <fstream>
using namespace std;
ifstream fin("arb_bin.in");
int i, n, st[50], dr[50];
struct Nod{
    int nr;
    Nod *st, *dr;
};
Nod *V;
void citire(){
    fin >>n;
    for(i=1;i<=n;i++)
        fin>>st[i];
    for(i=1;i<=n;i++)
        fin>>dr[i];
}
Nod *CreArb(int nod){
    if (nod){
        Nod *c = new Nod;
        c->st = CreArb(st[nod]);
        c->dr = CreArb(dr[nod]);
        return c;
    }
    return 0;
}


void SRD(Nod* c){
    //inordine
    if (c->nr){
        SRD(c->st);
        cout<<c->nr;
        SRD(c->dr);
    }
}
void RSD(Nod * c){
    //preordine
    if (c->nr){
        cout<<c->nr;
        RSD(c->st);
        RSD(c->dr);
    }
}
void SDR(Nod* c){
    //postordine
    if (c->nr){
        SDR(c->st);
        SDR(c->dr);
        cout<<c->nr;
    }
}
Nod* CautareR( Nod* t, int k){
    if (t=NULL)
        return NULL;
    if (k = t->nr)
        return t;
    else if (k<t->nr)
        return CautareR(t->st,k);
    else
        return CautareR(t->dr,k);
}
Nod* Cautare(Nod* t, int k){
    while (t!=NULL){
        if (k==t->nr)
            return t;
        else if (k<t->nr)
            t=t->st;
        else
            t = t->dr;
    }
    return NULL;
}

void inserare(Nod *t, int k){
    Nod *r=NULL, *p;
    while (t!=NULL){
        r=t;
        if (k==t->nr)
            return;
        else if (k<t->nr)
            t = t->st;
        else
            t = t->dr;
    }
    p = new Nod;
    p->nr = k;
    p->st = p->dr = NULL;
    if (p->nr < r->nr)
        r->st = p;
    else
        r->dr = p;
}
int main(){
    citire();
    V = CreArb(1);
    SRD(V);
    cout<<endl;
    RSD(V);
    cout<<endl;
    SDR(V);

return 0;
}
