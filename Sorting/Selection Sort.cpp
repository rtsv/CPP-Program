#include<bits/stdc++.h>
using namespace std;
void swap(int &a,int &b)
{
	int temp=a;
	a=b;
	b=temp;
}
void selectionSort(int a[],int n)
{
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=k=i;j<n;j++)
        {
            if(a[j]<a[k])
                k=j;
        }
        swap(a[i],a[k]);
    }
}

int main()
{
	int a[]={5,611,70,2,10,30,12};
	selectionSort(a,7);
	for(int i=0;i<7;i++)
	{
		cout<<a[i]<<" ";
	}
}
