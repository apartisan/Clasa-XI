/*

*/

#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char b[50];
    strcpy(b,"calculator");
    strcpy(b+3,b+6);
    cout<<b;

return 0;
}
