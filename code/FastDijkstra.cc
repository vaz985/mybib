// Implementation of Dijkstra's algorithm using adjacency lists
// and priority queue for efficiency.
//
// Running time: O(|E| log |V|)

vii adj[MAX];

memset(dist, inf, sizeof(dist));
priority_queue< ii, vector<ii>, greater<ii> > pq;
pq.push(ii(0,source));
while(!pq.empty()) {
  ii front = pq.top(); pq.pop();
  int d = front.first, u = front.second;
  if(d>dist[u]) continue;
  for(int j=0; j<adj[u].size(); j++) {
    ii v = adj[u][j];
    if(dist[u] + v.second < dist[v.first]) {
      dist[v.first] = dist[u] + v.second;
      pq.push(ii(dist[v.first], v.first));
    }
  }
}

