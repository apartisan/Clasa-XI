// un subsir cu un maxim de elemente care imi calculeaza suma maxima
#include <iostream>
using namespace std;
int i,j, a[100], b[100], cnt=0, n;
void Greedy(){
      for(i=0;i<n;i++)
            if (a[i]>=0){
                b[cnt]=a[i];
                cnt++;
            }
}

int main(){

    cout<<"Nr de elemente: ";
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    Greedy();
     for(i=0;i<cnt;i++)
        cout<<b[i]<<" ";
}
