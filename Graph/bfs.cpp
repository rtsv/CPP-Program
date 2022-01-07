#include<bits/stdc++.h>
using namespace std;

void addEdge(vector<int> graph[],int start,int next)
{
    graph[start].push_back(next);
    graph[next].push_back(start);
}

void breadthFirst(vector<int> graph[],int Node,int start)
{
    queue<int> q;
    q.push(start);
    int visited[Node]={0};
    
    
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        cout<<u<<" ";
        visited[u]=1;
        for(int z:graph[u])
        {
            if(visited[z]==0)
            {
                q.push(z);
            }
        }
    }
}

int main()
{
    int Node= 5;
    vector<int> graph[Node];
    addEdge(graph,0,1);
    addEdge(graph,0,2);
    addEdge(graph,1,3);
    addEdge(graph,1,4);
    addEdge(graph,2,3);
    // display(graph,Node);
    breadthFirst(graph,5,0);
}
