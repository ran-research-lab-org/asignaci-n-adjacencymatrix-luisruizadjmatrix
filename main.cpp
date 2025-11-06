#include "Graph.hpp"

using namespace std;

int main() {
  Graph G(10);
  G.addEdge(0, 9);
  G.addEdge(4, 2);
  G.addEdge(3, 2);
  G.addEdge(4, 1);
  G.addEdge(4, 0);
  
  cout << G.numEdges() << endl;
  cout << G.inDegree(2) << endl;
  cout << G.isInfluencer(0) << endl;

  G.print();
}
