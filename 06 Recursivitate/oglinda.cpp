/* Oglinda si inversul unui numar */
#include <iostream>
using namespace std;
void oglinda(int n){
    if (n!=0){
        cout << n%10;
        oglinda (n/10);
    }
}
int inv=0;
void invers(int n, int &inv){
    if (n!=0){
        inv  = inv*10 + n%10;
        invers(n/10,inv);
    }
}


int main(){
    invers(723,inv);
    cout<< inv;

return 0;
}
