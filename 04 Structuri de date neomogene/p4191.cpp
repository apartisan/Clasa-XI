#include <iostream>
using namespace std;
struct sala{
    int nrLocuri;
    int pret;
}t[15];

int main(){
    int s=0;
    //n=15
    //citire date - t[i].nr_locuri, t[i].pret
    // sf citire date

    for(int i=0;i<15;i++)
        s=s + t[i].nrLocuri*t[i].pret;
    cout <<s;

return 0;
}
