template <class T>
Graph<T>::Graph(GraphType t) {
  this->type = t;
  this->actualIndex = 0;
}

template <class T>
ostream& operator<<(ostream& os, Graph<T> g) {
  os << "Vertices:" << endl;
  for(auto it = g.verticesIndexes.begin(); it != g.verticesIndexes.end(); ++it)
    os << "  " << it->first << " " << it->second << endl;

  os << "Actual index: " << g.actualIndex << endl;
  return os;
}