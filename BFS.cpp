#include <iostream>
#include "BFS.hpp"
using namespace std;
int main() {
    Edge e(5); 
    e.addedge(0, 1);     
    e.addedge(0, 4);     
    e.addedge(1, 2);     
    e.addedge(1, 3);     
    e.addedge(3,4);
    e.printgraph();
    e.bfs(0);
    return 0;
}   