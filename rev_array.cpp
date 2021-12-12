#include<iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void reverse(int a[], int n)
{
    int j;
    for(int i=0, j=n-1; i<n/2; i++, j--)
    {
        swap(a[i], a[j]);
    }   
}
int main(){   
    int a[]={5,6,3,4,9,2};
    int n = sizeof(a)/sizeof(int);
    reverse(a,n);
    for(int x:a)
    {
        cout<<x<<" ";
    }
}
