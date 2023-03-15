
#include <iostream>
using namespace std;
int v[10],n;

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
    return k==5;
}

void afisare(){
    for (int i=1; i<=5;i++)
        cout << v[i]<<" ";
}
int Back(int k){
    int i;
    for(i=0;i<n;i++){
        v[k]=i;
        if(valid(k))
            if(solutie(k))
                afisare();
            else
                Back(k+1);
    }
}

int main(){
    n=9;
    Back(1);

return 0;
}
