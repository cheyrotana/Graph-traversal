#include <iostream>
#include "DFS.hpp"
using namespace std;
int main()
{   
    Edge e(5);
    e.addedge(0, 1);
    e.addedge(0, 4);
    e.addedge(1, 2);
    e.addedge(1, 5);
    e.printgraph();
    e.dfs(0);
    return 0;
}