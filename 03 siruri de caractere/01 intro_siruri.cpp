#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char cuv[110];
    char *p;
    char cuv2[20], cuv3[20];
//    cin>>cuv;
//    cout << cuv;
 //   cin.get(<sir_de_caractere>,nr_caractere,conditie_final);
  //  cin.get(cuv,11);
    //  cin.get(cuv,100,'a');
      cin.get(cuv,100);
//      cin.get();
//      cin.get(cuv2,5);
//      cin.get();
//      cin.get(cuv3,10);
//
//    cout<< cuv << '\t';
//    cout<<cuv2<<'\t';
//   cout<<cuv3;


    //tipul char*

//    cout<<cuv+3<<endl;
//    cout<<cuv+7;
    p=cuv;
    cout<<p<<endl;
    p++;
    cout<<p<<endl;
    p+=2;
    cout<<p<<endl;
    p--;
    cout<<p<<endl;

    cout << strlen(cuv);
}
