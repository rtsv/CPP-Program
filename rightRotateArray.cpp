#include<bits/stdc++.h>
using namespace std;

void rightRotate(int a[],int n)
{
    int temp;
    temp=a[n-1];
    for(int i=n-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }
    a[0]=temp;
}
int main()
{
    int a[]={2,3,4,1,5};
    int n=5;
    for(int i=0;i<3;i++)
    {
        rightRotate(a,n);
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}
