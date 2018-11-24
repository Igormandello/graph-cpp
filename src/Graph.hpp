#ifndef GRAPH_INCLUDED
#define GRAPH_INCLUDED

#include <iostream>
#include <map>
#include <string>
#include "../sparse-matrix-cpp/sparse-matrix/SparseMatrix.hpp"

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
    SparseMatrix<int> edges;
    int actualIndex;

  public:
    Graph(GraphType);
    void addVertex(T);
    void removeVertex(T);
    void addEdge(T, T, int);
    template <class U>
    friend ostream& operator<<(ostream&, Graph<U>);
};

#include "Graph.inl"

#endif