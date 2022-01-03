#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[],int start,int next)
{
    graph[start].push_back(next);
    graph[next].push_back(start);
}

void display(vector<int> graph[],int Node)
{
    for(int i=0;i<Node;i++)
    {
        cout<<i<<"->";
        for(int x:graph[i])
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
}


int main()
{
    int Node= 4;
    vector<int> graph[Node];
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    display(graph,Node);
}
