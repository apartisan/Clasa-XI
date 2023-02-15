#include <iostream>
using namespace std;
int n, a[10];
int estePrim(int p, int u){
    if (p==u){
        if (a[p]<2) //daca e <2 nu e prim
            return 0;
        if (a[p]>2 && a[p]%2==0) //daca e par >2, nu e prim
            return 0;
        for (int d=3; d*d<=a[p]; d+=2)
            if (a[p]%d==0)
                return 0;
        return 1;
    }
    else{
        int m = (p+u)/2;
        int r1 = estePrim(p, m);
        int r2 = estePrim(m+1, u);
        if (r1 || r2)
            return 1;
        else
            return 0;
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    if (estePrim(0,n-1))
        cout <<"DA";
    else
        cout<<"NU";
  return 0;
}
