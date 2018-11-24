#include <iostream>
#include "Graph.hpp"

using namespace std;

int main() {
  Graph<char> g(NON_DIRECTED);
  cout << g << endl << endl;

  g.addVertex('A');
  g.addVertex('B');
  g.addVertex('C');
  g.addVertex('D');
  cout << g << endl;

  g.removeVertex('C');
  cout << g << endl;

  g.addEdge('A', 'B', 10);
  g.addEdge('A', 'D', 15);
  g.addEdge('B', 'D', 12);
  cout << g << endl;

  g.removeEdge('A', 'D');
  cout << g;

  return 0;
}