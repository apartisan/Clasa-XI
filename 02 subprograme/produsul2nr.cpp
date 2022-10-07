#include <iostream>
using namespace std;
int x,y;
int prelucrare_prod(int a, int b){
    x=x+1;
    y=y+1;
    cout<< a <<" "<< b<<endl;
}

int main(){

    cin >> x >> y;
    prelucrare_prod(2,3);
    cout<<endl<< x <<" "<< y;

}
