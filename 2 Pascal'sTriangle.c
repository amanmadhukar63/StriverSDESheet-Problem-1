#include <bits/stdc++.h>

bool isValid(int ind, int n){
  if(ind<0 || ind>=n) return false;
  return true;
}

vector<vector<long long int>> printPascal(int n) 
{
  vector<vector<long long int>> ans;
  vector<long long int> v;
  for(int row=0;row<n;row++){
    for(int col=0;col<=row;col++){
      if(col==0 || col==row) v.push_back(1);
      else{
        long long val=0;
        if(isValid(col-1,row)) val+=ans[row-1][col-1];
        if(isValid(col,row)) val+=ans[row-1][col];
        v.push_back(val);
      }
    }
    ans.push_back(v);
    v.clear();
  }
  return ans;
}