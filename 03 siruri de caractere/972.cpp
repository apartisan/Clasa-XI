// 972
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[300];
    int cnt=0;
    char vocale[]="aeiou";
    char consoane[]="bcdfghjklmnpqrstvwxyz";
    cin.get(s,300);
    for (int i=0; i< strlen(s)-1;i++)
        if (strchr(vocale, s[i])&& strchr(consoane, s[i-1]) &&
            strchr(consoane, s[i+1]))
             cnt++;
    cout <<cnt;
}
