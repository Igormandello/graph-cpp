#include <iostream>
#include "Graph.hpp"

using namespace std;

int main() {
  Graph<int> g(DIRECTED);
  cout << g;

  return 0;
}