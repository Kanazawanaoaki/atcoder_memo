#include <bits/stdc++.h>
using namespace std;

int check(int i, int j, int k, vector<int> &l){
  int flag = 0;
  if( l[i]!=l[j] && l[j]!=l[k] && l[k]!=l[i]) flag =1;
  if(flag==1){
    int maxl = max(l[i],l[j]);
    maxl = max(maxl, l[k]);
    if(maxl < l[i]+l[j]+l[k]-maxl) flag =2;
  }
  if(flag==2){
    return 1;
  } else {
    return 0;
  }
}

int main() {
  int n;
  cin >> n;

  vector<int> l(n);
  for(int i=0; i<n; i++){
    cin >> l[i];
  }

  int ans = 0;
  for(int i=0;i<n-2;i++){
    for(int j=i;j<n-1;j++){
      for(int k=j; k<n;k++){
	if(check(i,j,k,l)==1){
	  ans++;
	}
      }
    }
  }

  cout << ans << endl;
  return 0;
}
