int uf[MAX];

int find(int x) {
  if(uf[x] != x)
    uf[x] = find(uf[x]);
  return uf[x];
}
void un(int x, int y) {
  int x_ = find(x);
  int y_ = find(y);
  if(x_==y_) return;
  r[x_] = r[y_];
}

int main() {
  for(int i=0; i<n; i++) uf[i] = i; 
  return 0;
}
