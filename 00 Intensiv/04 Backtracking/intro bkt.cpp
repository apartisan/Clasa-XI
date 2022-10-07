#include <iostream>
using namespace std;
int n, sol[10];

void init(int k){
    sol[k]=0;
}

int succesor(int k){
    if (sol[k]< n){
        sol[k]++;
        return 1;
    }
    else
        return 0;
}
int valid (int k){
    int i, ev=1;
    for (i=1; i<=k-1; i++)
        if (sol[k]==sol[i])
            ev = 0;
    return ev;
}
int solutie(int k){
    return k==n+1;
}
void afisare(){
    for (int i=1;i<=n; i++)
        cout << sol[i];
    cout << endl;
}
void  Back(int k){
    if (solutie(k))
        afisare();
    else{
        init(k);
        while (succesor(k))
            if (valid(k))
                Back(k+1);
    }
}
int main(){
    cin >> n;
    Back(1);
}

