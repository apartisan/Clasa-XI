#include <iostream>
using namespace std;
int a=10;
int suma(int a,int b){
    return a+b;
}
int suma(int a,int b,int c){
    return a+b+c;
}

int main(){
    int b=7,c=20;
    cout << suma(a,b)<<endl;
    cout << suma (5,8,15);


return 0;
}

