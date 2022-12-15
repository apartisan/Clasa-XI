/*

*/

#include <iostream>
using namespace std;
struct Nod{
    int info;
    Nod *urm;
}*prim=NULL;

void Creaza(int a[],int n){
    Nod *ultim, *q;
    prim = new Nod;
    prim->info = a[0];
    prim->urm=NULL;
    ultim = prim;
    for (int i=1;i<n;i++){
        q = new Nod;
        q->info = a[i];
        q->urm = NULL;
        ultim->urm = q;
        ultim = q;
    }
}
void Afisare( Nod *p){
    while (p!=NULL){
        cout << p->info <<" ";
        p = p->urm;
    }
}

int val_min(Nod *p){
    int minim=32767;
    while(p!=NULL){
        if(p->info<minim)
            minim=p->info;
        p=p->urm;}
        return minim;
}
int val_max(Nod *p){
    int maxim=0;
    while(p!=NULL){
        if(p->info>maxim)
            maxim=p->info;
        p=p->urm;}
        return maxim;
}

int main(){
    int a[5]={5,7,3,10,6};
    Creaza(a,5);
    Afisare(prim);
    cout<< endl<< val_min(prim);
    cout<<endl<< val_max(prim);
return 0;
}
