bool dfs(int node,int col,vector<int> adj[],vector<int> &color){
	color[node]=col;
	for(auto it:adj[node]){
		if(color[it]==-1){
			if(dfs(it,!col,adj,color)==false) return false;
		}
		else if(color[it]==col) return false;
	}
	return true;
}

bool isGraphBirpatite(vector<vector<int>> &edges) {
	int n=edges.size();
	vector<int> adj[n];
	vector<int> color(n,-1);

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(edges[i][j]==1){
				adj[i].push_back(j);
				adj[j].push_back(i);
			}
		}
	}

	for(int i=0;i<n;i++){
		if(color[i]==-1){
			if(dfs(i,0,adj,color)==false) return false;
		}
	}
	
	return true;
}
