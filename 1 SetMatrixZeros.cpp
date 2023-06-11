#include <bits/stdc++.h>

void setZeros(vector<vector<int>> &matrix)
{
	vector<pair<int,int>> index;
	int n=matrix.size();
	int m=matrix[0].size();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j]==0)
                index.push_back({i, j});
        }
	}
	for(auto it:index){
		for(int row=0;row<n;row++) matrix[row][it.second]=0;
		for(int col=0;col<m;col++) matrix[it.first][col]=0;
	}
}
