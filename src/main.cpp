#include <iostream>
#include "Graph.hpp"

using namespace std;

int main() {
  Graph<char> g(DIRECTED);
  cout << g << endl << endl;

  g.addVertex('A');
  g.addVertex('B');
  cout << g << endl;

  g.removeVertex('A');
  cout << g;

  return 0;
}