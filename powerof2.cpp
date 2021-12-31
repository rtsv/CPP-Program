
#include <iostream>
using namespace std;


void check(int n)
{
    if((n & n-1)==0)
    {
        cout<<"yes";
    }
    else
    cout<<"no";
}

int main()
{
    
    check(524);
    return 0;
}
