
#include <iostream>
using namespace std;
int v[5],n=9;

int valid(int k){
    int pare=0,impare=0,i;
    for(i=0; i<k; i++){
        if(v[i] = v[k])
            return 0;
        if (v[i]%2==0)
            pare++;
        else
            impare++;
    }
    if (v[k]%2==0)
        pare++;
    else
        impare++;
    if (pare>3 || impare>3)
        return 0;
 return 1;
}

int solutie(int k){
    if(k==4)
        return 1;
    else return 0;
}

void afisare(){
    for (int i=1; i<=5;i++)
        cout << v[i]<<" ";
}
int succesor(int k){
    if (v[k]< n){
        v[k]++;
        return 1;
    }
    else
        return 0;
}
void  Back(int k){
    if (solutie(k))
        afisare();
    else{
        v[k]=0;
        while (succesor(k))
            if (valid(k))
                Back(k+1);
    }
}

int main(){

    Back(1);
for (int i=1; i<=5;i++)
        cout << v[i]<<" ";
return 0;
}
