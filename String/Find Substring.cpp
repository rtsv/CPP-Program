#include<bits/stdc++.h>
using namespace std;
void subString(string s, string x)
{
    int j,i,count=0;
    int find=0;
    j=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]==x[j] && find!=1)
        {
            count=1;
            if(j==x.length()-1)
            {
                find=1;
                // return true;
                break;
            }
            j++;
        }
        else
        {
            find=0;
            count=0;
            j=0;
        }
    }
    // return false;
    if(find==1)
    {
        cout<<"found at "<<i-x.length()+1;
    }
    else
        cout<<"not found";
}

int main()
{
	string s="ritesh yadav";
	string sb="tesh";
	subString(s,sb);
}
