#include <iostream>
using namespace std;
int a,b;

void schimb(int &x, int &y){
    int aux;
    aux = x;
    x=y;
    y=aux;
}

int main(){
    cin >>a>>b;
    cout <<a<<" "<<b<<endl;
    schimb(a,b);
    cout <<a<<" "<<b;
    schimb(a,b);
    cout <<a<<" "<<b;

}

