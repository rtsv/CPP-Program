#include<bits/stdc++.h>
using namespace std;
bool sorted(int a[], int n)
{
    if(n==1)
        return true;
    if(a[n-1]<a[n-2])
        return false;
    return sorted(a,n-1);
}
int main()
{
    int a[]={3, 34, 4, 12, 5, 2};
    sort(a,a+6);
    cout<<sorted(a,6);
}
