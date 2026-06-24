#include <iostream>
#include <queue>
using namespace std;
class Graph
{
public:
    int V;
    int adj[5][5];

    Graph(int size)
    {
        V = size;
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                adj[i][j] = 0;
            }
        }
    }

    void addEdge(int u, int v)
    {
        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    void display()
    {
        for (int i = 0; i < V; i++)
        {
            for (int j = 0; j < V; j++)
            {
                cout << adj[i][j] << " ";
            }
            cout << endl;
        }
    }

    void bfs(int start)
    {
        bool visited[5] = {false};
        queue<int> q;
        visited[start] = true;
        q.push(start);

        while (!q.empty())
        {

            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int i = 0; i < V; i++)
            {
                if (adj[node][i] == 1 && visited[i] == false)
                {
                    visited[i] = true;
                    q.push(i);
                }
            }
        }
    }
};

int main()
{
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 4);
    g.display();
    g.bfs(0);

    return 0;
}