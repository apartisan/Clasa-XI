#include <iostream>
using namespace std;
int oglindit(int a){
    int oglindit = 0;
    while (a){
        oglindit = oglindit *10 + a%10;
        a/=10;
    }
    return oglindit;
}
bool estePalindrom(int a){
    return a==oglindit(a);
}

int main(){
    int x,y;
    cin>>x>>y;
    for (int i=x; i<=y;i++)
        if (estePalindrom(i))
            cout << i <<" ";
}
