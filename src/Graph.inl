template <class T>
Graph<T>::Graph(GraphType t) : edges(-1) {
  this->type = t;
  this->actualIndex = 1;
}

template <class T>
void Graph<T>::addVertex(T info) {
  if (this->verticesIndexes.insert(pair<T, int>(info, this->actualIndex)).second)
    this->actualIndex++;
}

template <class T>
void Graph<T>::removeVertex(T info) {
  this->verticesIndexes.erase(info);
}

template <class T>
void Graph<T>::addEdge(T origin, T destination, int weigth) {
  auto originIt = this->verticesIndexes.find(origin);
  auto destIt = this->verticesIndexes.find(destination);

  if (originIt != this->verticesIndexes.end() && destIt != this->verticesIndexes.end()) {
    this->edges.add(originIt->second, destIt->second, weigth);

    if (this->type == NON_DIRECTED)
      this->edges.add(destIt->second, originIt->second, weigth);
  }
}

template <class T>
ostream& operator<<(ostream& os, Graph<T> g) {
  os << "Vertices: {" << endl;
  for(auto it = g.verticesIndexes.begin(); it != g.verticesIndexes.end(); ++it)
    os << "  " << it->first << ": " << it->second << endl;
  os << "}" << endl;
  os << "Edge matrix: " << g.edges << endl;
  
  os << "Actual index: " << g.actualIndex << endl;
  return os;
}