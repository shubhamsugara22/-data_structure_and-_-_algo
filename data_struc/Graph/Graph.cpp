#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <vector>

using namespace std;

void addEdge(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}
void printgraph(vector<int> adj[], int V)
{
    for (int v = 0; v < V; ++v)
    {
        cout << "the adjacency list of vector" << v << "\n head";
        for (auto x : adj[v])
        {
            cout << "->" << x;
        }
        cout << "\n";
    }
}

int main()
{
    int V = 5;
    std::vector<int> adj[V];
    addEdge(adj, 0, 1);
    addEdge(adj, 0, 4);
    addEdge(adj, 1, 2);
    addEdge(adj, 1, 3);
    addEdge(adj, 1, 4);
    addEdge(adj, 2, 3);
    addEdge(adj, 3, 4);
    printgraph(adj, V);

    return 0;
}