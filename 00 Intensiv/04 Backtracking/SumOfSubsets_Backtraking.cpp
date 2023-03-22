#include <iostream>
using namespace std;
int g[100], sol[100], n, G;
void afisare(){
    for (int i=1; i<=n;i++)
        cout << sol[i];
    cout<<endl;
}
int solutie (int k){
    if (sum == G)
        return 1;
    return 0;
}
int valid(int k){


}

int Back(int k){
    int i;
    for(i=0;i<n;i++){
        sol[k]=i;
        if(valid(k))
            if(solutie(k))
                afisare();
            else
                Back(k+1);
    }
}

int main(){
    cout<<"Nr de elemente din vector: ";
    cin>>n;
    cout>> "Elementele din vector: ";
        for (int i=1;i<=n; i++)
            cin>> g[i];
    cout <<"Greutatea maxima";
    cin>>G
    Back(1);
    return 0;
}
