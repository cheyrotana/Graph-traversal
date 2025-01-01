#include <vector>
#include <queue>
#include <iostream>
#include <unordered_set>
using namespace std;
class Edge {
    private:
        int V;
        vector<pair<int, int>> edges;
    public:
        Edge(int v)
        {
            this->V = v;
        }   
        void addedge(int src, int dest)
        {
            edges.push_back({src, dest});
        }
        void removeedge(int src, int dest)
        {
            for (int i = 0; i < edges.size(); i++)
            {
                if (edges[i].first == src && edges[i].second == dest)
                {
                    edges.erase(edges.begin() + i);
                    break;
                }
            }
            cout << "Edge not found" << endl;
        }
        void printgraph()
        {
            cout << "Graph: " << endl;
            for (int i = 0; i < edges.size(); i++)
            {
                cout << edges[i].first << " -> " << edges[i].second << endl;
            }
        }
        void bfs(int src)
        {
            queue<int> q;
            unordered_set<int> visited;
            q.push(src);
            visited.insert(src);
            cout << "BFS: ";
            while (!q.empty())
            {
                int node = q.front();
                q.pop();
                cout << node << " ";
                for (int i = 0; i < edges.size(); i++)
                {
                    if (edges[i].first == node && visited.find(edges[i].second) == visited.end())
                    {
                        q.push(edges[i].second);
                        visited.insert(edges[i].second);
                    }
                    else if (edges[i].second == node && visited.find(edges[i].first) == visited.end())
                    {
                        q.push(edges[i].first);
                        visited.insert(edges[i].first);
                    }
                }
            }
        }
};