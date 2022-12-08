/*

*/

#include <iostream>
using namespace std;
struct Elev{
    char nume[21], prenume[21], sex;
    int numar_note;
    int note[10];
};
int n;
Elev V[28];

int main(){
    cout<< "Cati elevi sunt in clasa? ";
    cin>>n;
    cout <<"Dati nume, prenume, sex, nr. note si notele aferente:"<<endl;
    for(int i=0; i<n; i++){
        cin>>v[i].nume >> v[i].prenume >> v[i].sex;
        cin>>v[i].numar_note;
        for (int j=0; j<numar_note;j++)
            cin>>v[i].note[j];
    }

return 0;
}
