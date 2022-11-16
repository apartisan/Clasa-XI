#include <iostream>
using namespace std;
////4a
//void divizori(int n){
//    for (int i=2; i<=n/2;i++)
//        if (n%i==0)
//            cout <<i<<" ";
//}
////4b
//int fibb(int n){
//    int t0=0;
//    int t1=1;
//    int t2 = t0+t1;
//    for (int i=3; i<=n;i++){
//        t0=t1;
//        t1=t2;
//        t2=t0+t1;
//    }
//    return t2;
//}

//5
int a[10];

void citire(int a[],int n){
    for(int i=0;i<n;i++)
        cin>>a[i];
}
void afisare(int a[],int n){
   for(int i=0;i<n;i++)
    cout<< a[i]<<" ";
}
int nr_zero(int x){
    int cnt=0;
    while(x!=0){
        if(x%10==0)
            cnt++;
        x=x/10;
    }
    return cnt;
}
void ordonare(int a[], int n){
    int i,j;
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(nr_zero(a[i])> nr_zero(a[j])){
                int aux = a[i];
                    a[i] = a[j];
                    a[j] = aux;
            }
}

int main(){
    int n;
   cin >>n;
//    divizori(n);
//    cout<< fibb(n);
 citire(a,n);
 ordonare(a,n);
 afisare(a,n);
}
