#include <iostream>
#include "Graph.hpp"

using namespace std;

int main() {
  Graph<char> g(DIRECTED);
  cout << g;

  g.addVertex('A');
  cout << g;

  return 0;
}