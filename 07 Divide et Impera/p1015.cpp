#include <iostream>
using namespace std;
int n, a[10];
int suma(int p, int u){
    if (p==u)
        return a[p];
    else{
        int m  =(p+u)/2;
        int s1 = suma(p,m);
        int s2 = suma (m+1, u);
        return s1+s2;
    }
}
int main(){
    cin>>n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    cout << suma(0,n-1);

return 0;
}
