#include <iostream>
using namespace std;
int n, a[10];
int cmmdc(int a, int b){
if(b==0)
    return a;
else
    cmmdc(b,a%b);
}
int cmmdc3(int p, int u){
    if (p==u){
        return a[p];
    }
    else{
        int m = (p+u)/2;
        int st = cmmdc3(p,m);
        int dr = cmmdc3(m+1,u);
        return cmmdc(st, dr);
    }
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    cout <<cmmdc3(0,n-1);
return 0;
}
