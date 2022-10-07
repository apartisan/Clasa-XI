#include <iostream>
using namespace std;
int succ(int x){
    if (x==9) return 1;
    else
        return x+1;
}
void afiseaza_triunghi(int a, int b){
    for (int i=0;i<a;i++){
        for (int j=0;j<=i;j++){
            cout << b<<" ";
            b=succ(b);
        }
        cout <<endl;
    }
}
int main(){
    int m, n;
    cin >>m>>n;
    afiseaza_triunghi(m,n);
}
