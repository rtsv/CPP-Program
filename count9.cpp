#include<iostream>

using namespace std;

int count9(int n)
{
    
    int count=0;
    int rem;
    while(n !=0)
    {
    rem = n%10;
    n = n/10;
    if(rem == 9)
    {
        count++;
    }}
    return count;
    
}


int main()
{
    int count=0;
    for(int i=0;i<100;i++)
    {
        int x = count9(i);
        count = count+x;
    }
    cout<<count;
}
