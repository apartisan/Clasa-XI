#include <iostream>
using namespace std;
const int I = 2000000;
int n,A[20];
int Partitie(int A[], int st, int dr){
    int pivot = A[st];
    int i = st;
    int j = dr;
    do{
        do{
            i++;
        } while (A[i]<=pivot);
        do{
            j--;
        } while (A[j]>pivot);
        if (i<j)
            swap(A[i],A[j]);
        }while (i<j);
    swap(A[st], A[j]);
    return j;
}

void QuickSort(int A[], int st, int dr){
    int j;
    if (st < dr){
        j = Partitie(A,st,dr);
        QuickSort(A,st,j);
        QuickSort(A,j+1,dr);
    }
}
int main(){
    cin >>n;
    for (int i=0; i<n; i++)
        cin >> A[i];
    A[n] = I;
    QuickSort(A,0,n);
    for (int i=0; i<n; i++)
        cout << A[i] <<" ";

return 0;
}
