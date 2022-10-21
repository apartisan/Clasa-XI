#include <iostream>
using namespace std;
int main(){
    char cuv[]="Biblioteca vie la          Eliade.";
    int nrvoc=0, nrcons=0, nrcuv=1;
    for (int i=0; cuv[i]!='\0'; i++){
        if(cuv[i]=='A' || cuv[i]=='E'|| cuv[i]=='I'||cuv[i]=='O'
           ||cuv[i]=='U' ||cuv[i]=='a' || cuv[i]=='e'|| cuv[i]=='i'
           ||cuv[i]=='o'||cuv[i]=='u')
            nrvoc++;
        else if (cuv[i] >='A' && cuv[i]<='Z'
                 ||cuv[i]>='a' && cuv[i]<='z')
                    nrcons++;

        if (cuv[i]==' ' && cuv[i-1]!=' ')
            nrcuv++;
    }
    cout<<nrvoc<<" "<<nrcons<<endl;
    cout <<nrcuv;

}
