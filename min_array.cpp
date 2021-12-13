#include<bits/stdc++.h>
using namespace std;

int min(int a[], int n)
{
    int m=a[0];   
    for(int i=0;i<n;i++)
    {
        
        if(m > a[i])
        {
            m=a[i];
        }
    }return m;
}

int main()
{
    int a[]={5,6,1,2,7,9};
    int n=sizeof(a)/sizeof(int);
    cout<<min(a,n);
    
}
