#include <bits/stdc++.h>
using namespace std;

const int N=1e5+2;
std::vector<int> parent(N);
std::vector<int> sz(N);

void make_set(int v){
    parent[v]=v;
    sz[v]=1;
    
}

int find_set(int v){
    if(v == parent[v])
        return v;
    return parent[v]=find_set(parent[v]);
}

void union_sets(int a, int b){
    a=find_set(a);
    b=find_set(b);
    if(a!=b){
        if(sz[a]<sz[b])
            swap(a,b);
        parent[b]=a;
        sz[a]+=sz[b];
    }
}

int main() {
	for (int i = 0; i < N; i++) {
	    make_set(i);
	}
	
	int n,m;
	cin>>n>>m;
	std::vector<std::vector<int>> edges;
	for (int i = 0; i < m; i++) {
	    int u,v,w;
	    cin>>u>>v>>w;
	    edges.push_back({w,u,v});
	}
	sort(edges.begin(), edges.end());
	int cost=0;
	for (auto i : edges) {
	  int w=i[0];
	  int u=i[1];
	  int v=i[2];
	  
    int x=find_set(u);
    int y=find_set(v);
    
    if(x==y){
      continue;
    }
    else{
      std::cout << u << " " << v << std::endl;
      cost+=w;
      union_sets(u,v);
    }
	}
	std::cout << cost << std::endl;
	
	return 0;
}

// input:
// 5 7
// 1 2 20
// 1 3 50
// 1 4 70
// 1 5 90
// 2 3 30
// 3 4 40
// 4 5 60

// output:
// 1 2
// 2 3
// 3 4
// 4 5
// 150
