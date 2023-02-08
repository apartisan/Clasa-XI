#include <iostream>
using namespace std;
const int I = 2000000;
int n,A[20];
int Partitie(int st, int dr){
    int pivot = A[st];
    int i = st;
    int j = dr;
    while (i<j){
    do{
        i++;
    } while (A[i]<=pivot);
    do{
        j--;
    } while (A[j]>=pivot);
    if (i<j)
        swap(A[i],A[j]);
    }
    swap(A[st], A[j]);
    return j;
}

void QuickSort(int st, int dr){
    if (st < dr){
        int j = Partitie(st,dr);
        QuickSort(st,j-1);
        QuickSort(j+1,dr);
    }
}
int main(){
    cin >>n;
    for (int i=0; i<n; i++)
        cin >> A[i];
    QuickSort(0,n-1);
    for (int i=0; i<n; i++)
        cout << A[i] <<" ";

return 0;
}
