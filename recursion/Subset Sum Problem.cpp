#include<bits/stdc++.h>
using namespace std;
long long fib[100]={-1};
bool subsetSum(int a[],int n,int sum)
{
    if(sum==0)
        return true;
    if(n==0)
        return false;
    if(a[n-1]>sum)
        return subsetSum(a,n-1,sum);
    return subsetSum(a,n-1,sum) || subsetSum(a,n-1,sum-a[n-1]); 
    
}
int main()
{
    int set[] = {3, 34, 4, 12, 5, 2};
    cout<<subsetSum(set,6,60);
}
