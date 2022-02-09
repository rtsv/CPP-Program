// str = "application==http"
// str2 = "application== ethernet"

#include<bits/stdc++.h>
using namespace std;

string stringfind(string str )
{
    string s;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]=='=' && str[i+1]=='=')
        {
            for(int j=i+2;j<str.length();j++)
            {
                if(str[j]!=' ')
                    s=s+str[j];
                
            }
        }
    }
    return s;
}
int main()
{
    string str1 = "application==http";
    string str2 = "application==  ethernet";
    cout<<stringfind(str1)<<endl;//http
    cout<<stringfind(str2);//ethernet
}
