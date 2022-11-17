// 12
#include <iostream>
#include <cstring>
using namespace std;
int main(){
    char s[300];
    cin.get(s,300);
    for(int i=0; i<strlen(s);i++)
        if ((i==0 || s[i+1]=='\0' ||s[i-1]==' ' ||s[i+1]==' ')
            && (s[i]>='a' && s[i]<='z')){
            s[i]=s[i]-32;
            cout<< s[i];
        }
        else
            cout<<s[i];

}
