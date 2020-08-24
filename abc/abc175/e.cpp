#include <bits/stdc++.h>
using namespace std;

int main() {
  int R,C,K;
  cin >> R >> C >> K;

  vector<vector<long long>> m(R, vector<long long>(C));
  vector<vector<long long>> s(R, vector<long long>(C));

  int r,c,v;
  for(int i=0;i<K;i++){
    cin >> r >> c >> v;
    m[r-1][c-1] = v;
  }

  // s[R-1][C-1]=m[R-1][C-1];
  long long right;
  long long under;
  for(int i=R-1;i>=0;i--){
    vector<long long> tmp(3);
    long long tmpb =0;
    for(int j=C-1;j>=0;j--){
      right=0;
      under=0;
      if(i!=R-1){
	under=s[i+1][j]+m[i][j];
      }
      if(j!=C-1){
	if(m[i][j]>tmpb){
	  right=s[i][j+1]+m[i][j]-tmpb;
	  tmp.push_back(m[i][j]);
	  sort(tmp.begin(),tmp.end(),greater<int>());
	  tmp.pop_back();
	  tmpb = tmp[2];
	  // cout << tmpb << endl;
	} else {
	  right=s[i][j+1];
	}
      }
      s[i][j]=max(right,under);
      if(i==R-1 && j==C-1){
	s[i][j]=m[i][j];
	// cout << s[i][j] << endl;
      }
    }
  }	   

  // cout << endl;
  // for(int i=0;i<R;i++){
  //   for(int j=0;j<C;j++){
  //     cout << m[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  // cout << endl;
  // for(int i=0;i<R;i++){
  //   for(int j=0;j<C;j++){
  //     cout << s[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  

  cout << s[0][0] << endl;
  return 0;
}
