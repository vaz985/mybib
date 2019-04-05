vector<int> resp;
// rola priority queue tb
queue<ii> q;
for(int i=1; i<=n; i++)
  if(degree[i].first == 0)
    q.push(degree[i]);

while(!q.empty()) {
  ii e = q.front(); q.pop();
  resp.push_back(e.second);
  for(auto it : adj[e.second])
    if( --degree[it].first == 0 )
      q.push(degree[it]);
}
