#include <bits/stdc++.h>
using namespace std;
const int inf=1e9;

int main() {
	int n,m; cin>>n>>m;
	std::vector<std::vector<int>> edges;
	for (int i = 0; i < m; i++) {
	    int u,v,w;
	    cin>>u>>v>>w;
	    edges.push_back({u,v,w});
	}
	int source; cin>>source;
	std::vector<int> dist(n,inf);
	dist[source]=0;
	
	for (int iter = 0; iter < n-1; iter++) {
	    bool change=false;
	    
	    for (auto e : edges) {
	        int u=e[0];
	        int v=e[1];
	        int w=e[2];
	        
	        if(dist[v]>w+dist[u])
	            change=true;
	        
	        dist[v]=min(dist[v],w+dist[u]);
	    }
	}
	for (auto i : dist) {
	    std::cout << i << " ";
	}
	std::cout << std::endl;
	
	return 0;
}

// input:
// 5 8
// 1 2 3
// 3 2 5
// 1 3 2
// 3 1 1
// 1 4 2
// 0 2 4
// 4 3 -3
// 0 1 -1
// 0 1 -1
// 0

// output:
// 0 -1 2 -2 1