/*
Se citesc de la tastatura o serie de caractere pana tastam
caracterul '0'.
Programul va afisa caracterele citite in sens invers.
*/

#include <iostream>
using namespace std;
void car(){
    char c;
    cin>>c;
    if (c != '0')
        car();
    cout <<c<<" ";
}

int main(){
 car();

return 0;
}
