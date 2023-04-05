#include <iostream>
using namespace std;

int n, st[20], dr[20];

void citire(){
    cin>>n;
    for(int i=1; i<=n; i++)
        cin>>st[i];
    for(int i=1; i<=n; i++)
        cin>>dr[i];
}

int Radacina(){
    int v[100]={0};
    for (int i=1; i<=n; i++){
        if (st[i]!=0)
            v[st[i]] = 1;
        if (dr[i]!=0)
            v[dr[i]] = 1;
    }
    for(int i=1; i<=n; i++)
        if (v[i] == 0)
            return i;
    return 0;

}
struct nod{
    int info;
    nod *st, *dr;
};

void creare(nod *&r, int x){
    if(x!=0){
        r = new nod;
        r->info = x;
        r->st = r->dr = NULL;
        int y;
        cout<<"st["<<x<<"]=";
        cin>>y;
        creare(r->st, y);
        cout<<"dr["<<x<<"]=";
        cin>>y;
        creare(r->dr,y);
    }
}
void afisare(nod *r){
    if (r != NULL){
        cout<<r->info <<" ";
        afisare(r->st);
        afisare (r->dr);
    }
}
int main(){
    nod *R = NULL;
    int x;
    cout <<"Eticheta radacinii: ";
    cin >>x;
    creare(R,x);
    afisare(R);
return 0;
}
