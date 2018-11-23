#ifndef GRAPH_INCLUDED
#define GRAPH_INCLUDED

#include <iostream>

using namespace std;

enum GraphType {
  DIRECTED,
  NON_DIRECTED
};

template <class T>
class Graph {
  private:
    GraphType type;

  public:
    Graph(GraphType);
};

#include "Graph.inl"

#endif