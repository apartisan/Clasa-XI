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

void AdaugaNodLaFinal( Nod * &prim, int x){
    //cream un nou nod
    Nod *q = new Nod;
    q->info = x;
    q->urm = NULL;
    //adaugam noul nod in lista
    if (prim==NULL){
        //lista este vida
        prim = q;}
    else{
        //lista nu e vida
        Nod *p = prim;
        while (p->urm !=NULL)
            p = p->urm;
        p->urm = q;
    }
}
void AdaugaNodLaInceput( Nod * &prim, int x){
    //creaza un nod nou
        Nod *q = new Nod;
        q->info = x;
        q->urm = NULL;
    //legam nodul de lista
        q->urm = prim;
    //modificam pointerul prim
        prim = q;
}
void StergeNodLaInceput(){
    Nod *p = prim;
    prim = prim->urm;
    delete p;
}
void StergeNodDupaX(int x){
    Nod *p = prim;
    Nod *q;
    while (p->info != x){
        p=p->urm;
    }
    q = p->urm;
    p->urm = q->urm;
    delete q;
}

void AdaugaNodDupaX(){


}
int main(){
    int a[5]={5,7,3,10,6};
    Creaza(a,5);
    Afisare(prim);
    AdaugaNodLaFinal(prim,13);
    cout<<endl;
    Afisare(prim);
    AdaugaNodLaInceput(prim,20);
    cout<<endl;
    Afisare(prim);
    StergeNodDupaX(10);
    cout<<endl;
    Afisare(prim);

return 0;
}
