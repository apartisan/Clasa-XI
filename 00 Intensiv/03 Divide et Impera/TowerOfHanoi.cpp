#include <iostream>

void ToH(int n, int A, int B, int C,int &cnt){
    if (n>0){
        ToH(n-1,A,C,B,cnt);
        std::cout <<A<<" - " << C << " *-> ";
        cnt++;
        ToH(n-1,B,A,C,cnt);
    }
}
int main(){
    int cnt=0;
    ToH(5,1,2,3,cnt);
    std::cout << '\n'<< cnt;
}
