#include <iostream>
using namespace std;
// problema 3
//int a,b; float x;
//
//int f (int c){
//    int a,b;
//    a=10; b=5;
//    return (a+b+c);
//}
//int main(){
//    a=3; b=1;
//    x=f(a-b)%10;
//    cout<<a<<" " <<b<<" "<<x<<endl;
//
//}

//problema 4a
//void divizori(int n){
//    for (int i=2;i<=n/2;i++)
//        if(n%i==0)
//            cout <<i<<" ";
//}
//int main(){
//    int n;
//    cin>>n;
//    divizori(n);
//
//}

//problema 4b

int fibb(int n){
    int t0,t1,t2;
    t0=0;
    t1=1;
    for(int i=2;i<=n;i++){
        t2 = t0+t1;
        t0=t1;
        t1=t2;
    }
    return t2;
}
int main(){
    int n;
    cin>>n;
    cout<<fibb(n);

}
