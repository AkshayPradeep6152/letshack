class Graph {

  // inner class
  // to keep track of edges
  class Edge {
    int src, dest;
  }

  // number of vertices and edges
  int vertices, edges;

  // array to store all edges
  Edge[] edge;

  Graph(int vertices, int edges) {
    this.vertices = vertices;
    this.edges = edges;

    // initialize the edge array
    edge = new Edge[edges];
    for(int i = 0; i < edges; i++) {

      // each element of the edge array
      // is an object of Edge type
      edge[i] = new Edge();
    }
  }

  public static void main(String[] args) {
