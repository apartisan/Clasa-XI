#include <iostream>
using namespace std;
int n=1;
int test(int a, int &n){
    n+=1;
    a+=1;
    cout<<a<<endl;
    cout << n<<endl;
    return a ;
}

int main(){
    cout << test(2,n)<<endl;
    cout <<n<<endl;

    return 0;
}


