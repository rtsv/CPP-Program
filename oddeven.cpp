#include <iostream>
using namespace std;


void check(int n)
{
    if((n & 1)==1)
    {
        cout<<"odd";
    }
    else
    cout<<"even";
}


int main()
{
    
    check(11);
    return 0;
}
