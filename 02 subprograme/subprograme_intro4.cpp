#include <iostream>
using namespace std;
float y=5;
int f(float x, float y){
    x=x/3;
    y=y+x/2;
return x;
}

int main(){
    cout<< f(12,y)<<endl;
    cout <<y;
}
