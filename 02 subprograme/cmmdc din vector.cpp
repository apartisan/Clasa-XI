//se citeste un vector
//sa se gaseasca cmmdc al tuturor elementelor vectorului
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
int main(){
    int n, a[10], c;
    //citim nr de elemente ale vectorului
    cin >>n;
    //citim valorile elementelor din vector
    for (int i=0;i<n;i++)
        cin>> a[i];
    //calculam cmmdc al primelor doua elemente din vector
    c = cmmdc(a[0],a[1]);
    //pentru restul elementelor calculam
    //cmmdc (cmmdc anterior si elementul curent)
    for (int i=2;i<n;i++)
        c = cmmdc(c,a[i]);

    cout <<c;
}
