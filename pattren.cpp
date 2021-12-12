#include<bits/stdc++.h>
using namespace std;

void printPattern(int x)
{
    if(x>0)
    {
        cout<<x<<" ";
        printPattern(x-5);
    }
    cout<<x<<" ";
}



int main()
{
    printPattern(20);
    
}
