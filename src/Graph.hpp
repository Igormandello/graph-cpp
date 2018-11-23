#ifndef GRAPH_INCLUDED
#define GRAPH_INCLUDED

#include <iostream>
#include <map>
#include <string>

using namespace std;

enum GraphType {
  DIRECTED,
  NON_DIRECTED
};

template <class T>
class Graph {
  private:
    GraphType type;
    map<T, int> verticesIndexes;
    int actualIndex;

  public:
    Graph(GraphType);
};

#include "Graph.inl"

#endif