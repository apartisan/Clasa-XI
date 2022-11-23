#include <iostream>
using namespace std;
struct cplx{
    float real,imaginar;
};

int main(){
    cplx a,b;
    float sr,si,dr,di;
    cin>> a.real>>a.imaginar;
    cin>> b.real>>b.imaginar;
    sr = a.real + b.real;
    si = a.imaginar + b.imaginar;
    dr = a.real - b.real;
    di = a.imaginar - b.imaginar;
    cout<<"Suma nr complexe este: "<<sr <<" + "<<si<<"i"<<endl;
    if (di<0)
     cout<<"Diferenta nr complexe este: "<<dr <<" "<<di<<"i"<<endl;
    else
        cout<<"Diferenta nr complexe este: "<<dr <<" + "<<di<<"i"<<endl;
}
