template <class T>
Graph<T>::Graph(GraphType t) {
  this->type = t;
  this->actualIndex = 0;
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
ostream& operator<<(ostream& os, Graph<T> g) {
  os << "Vertices: {" << endl;
  for(auto it = g.verticesIndexes.begin(); it != g.verticesIndexes.end(); ++it)
    os << "  " << it->first << ": " << it->second << endl;
  os << "}" << endl;
  
  os << "Actual index: " << g.actualIndex << endl;
  return os;
}