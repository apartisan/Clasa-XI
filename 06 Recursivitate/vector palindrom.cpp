#include <iostream>
using namespace std;
int estePalindrom(int a[20], int i, int j){
    if (i>=j)
        return 1;
    else
        if (a[i]!=a[j])
            return 0;
        else return estePalindrom(a,i+1, j-1);
}


int main(){
    int a[20], n;
    cin >> n;
    for (int i=0; i<n; i++)
        cin >> a[i];
    if(estePalindrom(a,0,n-1))
        cout << "este palindrom";
    else
        cout << "NU ESTE";

return 0;
}
