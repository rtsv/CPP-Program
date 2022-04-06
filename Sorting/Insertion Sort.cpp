#include<bits/stdc++.h>
using namespace std;
void insertionSort(int a[], int n)
{
    int i,j,x;
    for(i=1;i<n;i++)
    {
        j=i-1;
        x=a[i];
        while(j>-1 && a[j]>x)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=x;
    }
}
int main()
{
    int a[]={6,8,10,12,5,4};
    int n=6;
    insertionSort(a,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}
