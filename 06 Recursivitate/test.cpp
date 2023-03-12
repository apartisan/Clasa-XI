#include <iostream>
using namespace std;
void ex(int n){
    if(n){
        ex(n-1);
        cout<<n;
    }
}
int f(int n){
    if(n==0) return 0;
    else
        if(n%2)
            return n+f(n-1);
        else
            return n/2+f(n-1);
}

int y=0;
int suma(int x){
	if(x==1) return 0;
	else
		if(x%2==0) return suma(x-1)+(x-1)*x;
	    else
			return suma(x-1)-(x-1)*x;
}
int joc(int a,int b){
	cout<<a<<" ";
	if(a<=3){
        cout<<b<<" ";
        y++;
        return joc(a+1,b)+1;
	    }
	else
		return 0;
}

void sub(int n){
    int i;
    for(i=n;i>=1;i--)
        cout<<i<<" ";
    for(i=1;i<=n;i++)
        if(i%3==0)
            cout<<i<<" ";
 }
void sub1(int n){
    if (n>0){
        cout<<n<<" ";
        sub(n-1);
        if (n%3==0)
            cout<<n<<" ";
    }
}
void afis(int i,int j){
    if(i<=3)
	    if(j<=i){
            cout<<"*";
            afis(i,j+1);
		}
	else
		afis(i+1,1);
}

void tipar(int n){
    int i;
	if(n)
        if(n%3==0){
            cout<<n<<" ";
            tipar(n+1);
		}
        else{
            tipar(n-2);
            cout<<n<<" ";
		}
}

int an(int n){
    if (n==0)
        return 1;
    else if (n%2==0)
        return an(n-1)/2;
    else
        return 3 * an(n-1)+1;
}






int main(){
//    ex(4);
//    cout<<endl;
//    cout<<f(6);
//    cout<<endl<<suma(11);
//    cout<<endl<<joc(2,1);
//
//    afis(1,1);
cout<< an(1);
}
