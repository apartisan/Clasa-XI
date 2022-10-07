#include<iostream>
using namespace std;
int nrcif(int x)
{
    if(x<10)
        {if(x==1)
           return 1;
        else
            return 0;
        }
    else
    {
        if (x%10==1)
            return 1+nrcif(x/10);
        else
            return nrcif(x/10);
    }
}
    int main()
    {
        int n;
        cout<<"n=";
        cin>>n;
        cout<<nrcif(n);
    }

