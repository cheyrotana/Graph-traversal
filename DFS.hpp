#include <iostream>
#include <vector>
#include <stack>
#include <unordered_set>
using namespace std;
class Edge {
    private:
        int V;
        vector<pair<int, int>> edges;
    public:
        Edge(int V) {
            this->V = V;
        }
        void addedge(int src, int dest) {
            edges.push_back({src, dest});
        }
        void removeedge(int src, int dest) {
            for (int i = 0; i < edges.size(); i++) {
                if (edges[i].first == src && edges[i].second == dest) {
                    edges.erase(edges.begin() + i);
                    break;
                }
            }
            cout << "Edge not found" << endl;
        }
        void printgraph() {
            cout << "Graph: " << endl;
            for (int i = 0; i < edges.size(); i++) {
                cout << edges[i].first << " -> " << edges[i].second << endl;
            }
        }
        void dfsutil (int src, unordered_set<int> &visited) {
            visited.insert(src);
            cout << src << " ";
            for (int i = 0; i < edges.size(); i++) {
                if (edges[i].first == src && visited.find(edges[i].second) == visited.end()) {
                    dfsutil(edges[i].second, visited);
                }
                else if (edges[i].second == src && visited.find(edges[i].first) == visited.end()) {
                    dfsutil(edges[i].first, visited);
                }
            }
            
        }
        void dfs(int src) {
            unordered_set<int> visited;
            cout << "DFS: ";
            dfsutil(src, visited);
            cout << endl;
        }

};