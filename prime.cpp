#include<bits/stdc++.h>
using namespace std;
bool prime(int n)
{
    if(n==1 || n==0)
    return false;
    if(n==2)
    return true;
    
    for(int i=2;i<=sqrt(n);i++)
    {
        if(n%i==0)
        return false;
    }return true;
}
int main()
{
    for(int i=0;i<100;i++)
    {
        if(prime(i))
        cout<<i<<" ";
    }
}
