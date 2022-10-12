#include <iostream>
using namespace std;
void schimba(int &x, int &y){
    if (x > y){
        int c=x;
        x=y;
        y=c;
    }
}
void afiseaza_numerele_din_interval(int x,int y){
    schimba(x,y);
    for (int i = x; i<= y; i++)
        cout << i<<" ";
}

int main(){
    int x,y;
    cin>>x>>y;
    afiseaza_numerele_din_interval(x,y);
}
