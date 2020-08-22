#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w;
  cin >> h >> w;

  int ch, cw, dh, dw;
  cin >> ch >> cw >> dh >> dw;

  vector<vector<char>> s(h, vector<char>(w));
  vector<vector<int>> g(h, vector<int>(w));

  int g_num = 1;
  int flag = 0;
  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cin >> s[i][j];
      flag = 0;
      if (j>0) {
    	if((s[i-1][j]=='.') && (s[i][j] == '.')){
    	  g[i][j]=g[i][j-1];
    	  flag = g[i][j-1];
	  // &g[i][j-1] = &g[i][j];
    	}
      }
      if (i>0) {
    	if((s[i-1][j]=='.') && (s[i][j] == '.')){
    	  if(flag != 0 && flag<g[i-1][j]){
    	    g[i-1][j]= flag;
    	  }
    	  g[i][j]=g[i-1][j];
	  flag = g[i-1][j];
	  // &g[i-1][j] = &g[i][j];
    	}
      }
      if(flag == 0){
	g[i][j]=0;
	g_num++;
      }
    }
  }
  

  for(int i=0;i<h;i++){
    for(int j=0;j<w;j++){
      cout << g[i][j];
    }
  }
  cout << endl;
  
  return 0;
}
