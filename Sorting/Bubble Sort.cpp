#include<bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
{
	int temp=*a;
	*a=*b;
	*b=temp;
}
void bubbleSort(int a[],int n)
{
	int flag;
	for(int i=0;i<n-1;i++)
	{
		flag=0;
		for(int j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
				swap(a[j],a[j+1]);
				flag=1;
		}
		if(flag==0)
			break;
	}
}
int main()
{
	int a[]={5,611,70,12};
	bubbleSort(a,4);
	for(int i=0;i<4;i++)
	{
		cout<<a[i]<<" ";
	}
}
