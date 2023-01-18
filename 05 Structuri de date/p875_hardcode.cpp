/*
 folosind stiva din STL
*/
#include <iostream>
using namespace std;
struct Nod{
    int info;
    Nod *urm;
};
Nod *prim =NULL;
Nod *ultim = NULL;

void push(Nod *&prim, int val){
    Nod *ultim = new Nod;
    ultim->info = val;
    ultim->urm = NULL;
    if (prim==NULL)
        prim=ultim;
    else{
        Nod *p = prim;
        while (p->urm !=NULL)
            p = p->urm;
        p->urm = ultim;
    }
}
void pop(Nod *p){
    while (p->urm->urm !=NULL)
        p = p->urm;
     delete ultim;
     ultim = p;
}
void top(Nod *p){
     while (p !=NULL)
        p = p->urm;
    cout << p->info;
}
void afisare( Nod *p){
    while (p!=NULL){
        cout << p->info <<" ";
        p = p->urm;
    }
}
using namespace std;

int main(){
    int n, val;
    string comanda;
    cin>> n;
    for (int i=1; i<=n; i++){
        cin>>comanda;
        if (comanda =="push"){
            cin >>val;
            push(prim,val);
        }
        else if(comanda=="top"){
            afisare(prim);
            cout<<endl;}
        else
            pop(prim);
    }
return 0;
}
