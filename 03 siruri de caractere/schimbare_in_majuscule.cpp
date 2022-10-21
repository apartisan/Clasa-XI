#include <iostream>
#include <cstring>

using namespace std;
int main(){
    char cuv[]="Ana Are Mere.";
    for (int i=0;i<strlen(cuv);i++)
        if (cuv[i]>='A' && cuv[i]<='Z') //majuscule in ASCII
            cuv[i]+=32;
        else if (cuv[i]>=97 && cuv[i]<=122) //litere mici ASCII
            cuv[i]-=32;
    cout<<cuv;

}
