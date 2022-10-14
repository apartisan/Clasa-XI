#include <iostream>
#include <cmath>
using namespace std;
int sol[10],n;
void afisare(){
    for(int i=1; i<=n; i++)
        cout<<sol[i]<" ";
    cout<<endl;
}
bool solutie(int k){
    return k==n;
}
bool valid(int k){
    for (int i = 1; i<k; i++)
        if (sol[k]==sol[i]|| abs(sol[k]-sol[i])==abs(k-i))
            return false;
    return true;
}

void Back(int k){
    for (int i=1;i<=n; i++){
        sol[k] = i;
        if(valid(k))
            if (solutie(k))
                afisare();
            else
                Back(k+1);
    }

}
int main(){
    cin>> n;
    Back(1);
    return 0;
}
