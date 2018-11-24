#include <iostream>
#include "Graph.hpp"

using namespace std;

int main() {
  Graph<char> g(NON_DIRECTED);
  cout << g << endl << endl;

  g.addVertex('A');
  g.addVertex('B');
  g.addVertex('C');
  cout << g << endl;

  g.removeVertex('C');
  cout << g << endl;

  g.addEdge('A', 'B', 10);
  cout << g;

  return 0;
}