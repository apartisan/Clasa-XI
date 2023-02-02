
#include <iostream>
using namespace std;
int v[10],n;
int maxim(int i, int j){
    int a,b;
    if (i==j)
        return v[i];
    else{
        a = maxim(i, (i+j)/2);
        b = maxim((i+j)/2 + 1, j);
        if (a>b)
            return a;
        else
            return b;
    }
}

int main(){
     cin >>n;
     for(int i=0; i<n; i++)
        cin>>v[i];
     cout << "Valoarea maxima este: " << maxim(0,n-1);

return 0;
}
