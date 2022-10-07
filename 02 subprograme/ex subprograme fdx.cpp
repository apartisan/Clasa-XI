#include <iostream>
using namespace std;
int f(int x){
    if (x < -1)
        return x+1;
    else if (x > 1)
            return 6/(1+x);
         else
            return (x+1)/(1+x*x);
}

int main(){
    int a,b;
    cin >>a >> b;
    if (f(a) > f(b))
        cout << "f(" << a << ") este mai mare "<<endl;
    else
        cout << "f(" << b << ") este mai mare "<<endl;
}
