#include <iostream>
using namespace std;
int ceaMaiMicaCifra(int n){
    int cmmc = 9;
    while(n){
        if (n%10 < cmmc)
            cmmc = n%10;
        n /=10;
    }
    return cmmc;
}
int main(){
    int n;
    cin>> n;
    cout << ceaMaiMicaCifra(n);
}
