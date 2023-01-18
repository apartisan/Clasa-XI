/*
 folosind stiva din STL
*/

#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> st;
    int n, val;
    string comanda;
    cin>> n;
    for (int i=1; i<=n; i++){
        cin>>comanda;
        if (comanda =="push"){
            cin >>val;
            st.push(val);
        }
        else if(comanda=="top")
            cout <<st.top()<<endl;
        else
            st.pop();
    }
return 0;
}
