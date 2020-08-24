#include <bits/stdc++.h>
using namespace std;

int main() {
  int R,C,K;
  cin >> R >> C >> K;

  vector<vector<int>> m(R, vector<int>(C));
  vector<vector<vector<long long>>> s(R+1, vector<vector<long long>>(C+1 ,vector<long long>(4)));

  int r,c,v;
  for(int i=0;i<K;i++){
    cin >> r >> c >> v;
    m[r-1][c-1] = v;
  }

  for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
      for(int k=2;k>=0;k--){
	s[i][j][k+1]=max(s[i][j][k+1],s[i][j][k]+m[i][j]);
      }
      for(int k=0;k<4;k++){
	s[i+1][j][0]=max(s[i+1][j][0], s[i][j][k]);
	s[i][j+1][k]=max(s[i][j+1][k], s[i][j][k]);
      }
    }
  }

  long long ans=0;
  for(int k=0;k<4;k++){
    ans=max(ans,s[R-1][C-1][k]);
    // cout << ans << endl;
  }
  cout << ans << endl;
  return 0;
}
