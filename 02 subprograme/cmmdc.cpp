#include <iostream>
using namespace std;
int cmmdc(int a, int b){
    while (a!=b){
      if (a>b)
            a-=b;
      else
        b-=a;
    }
    return a;
}
int cmmdc(int a, int b, int c){
    return cmmdc(cmmdc(a,b),c);
}
int cmmmc(int a,int b){
    return a*b/cmmdc(a,b);
}
int cmmmc(int a, int b, int c){
    return a*b*c/cmmdc(a,b,c);
}

int main(){
    int a,b,c,divc,multc;
    cin>>a>>b>>c;
    divc = cmmdc(a,b);
    multc = a*b/divc;
   // cout<< divc<< " " <<multc;
    cout << cmmdc(a,b,c)<<endl;
    cout << cmmmc(a,b)<< endl;
     cout << cmmmc(a,b,c);
    return 0;
}
