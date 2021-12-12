#include<iostream>
#include<math.h>
using namespace std;

bool pow_check(int n)
{
    if(floor(log2(n))==ceil(log2(n)))
    {
        return true;
    
    }
    else
    return false;
}

int main()
{
    int a=256;
    if(pow_check(a))
    cout<<true;
    else
    cout<<false;
}
