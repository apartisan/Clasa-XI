/*
*/

#include <iostream>
using namespace std;
int nr_cif(long long int n){
    if (n<10)
        return 1;
    return 1+nr_cif(n/10);

}

int main(){
    long long int n;
    cin >> n;
    cout << nr_cif(n);

return 0;
}
