#include <iostream>
using namespace std;
int n, a[10];
int esteImpar(int p, int u){
    if (p==u){
        if (a[p]%2==0)
            return 0;
        else
            return 1;
    }
    else{
        int m = (p+u)/2;
        int s1 = esteImpar(p, m);
        int s2 = esteImpar(m+1,u);
        if (s1 || s2)
            return 1;
        else
            return 0;

    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    if (esteImpar(0,n-1))
        cout<<"Da";
    else
        cout<<"NU";

return 0;
}
