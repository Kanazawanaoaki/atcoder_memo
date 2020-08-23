#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  long k;
  cin >> n >> k;

  vector<int> p(n);
  vector<long> c(n);

  for(int i=0;i<n;i++){
    cin >> p[i];
  }
  for(int i=0;i<n;i++){
    cin >> c[i];
  }

  long long ans =-1000000000;
  long long tmp =0;
  int now;
  for(int i=0;i<n;i++){
    now=p[i]-1;
    tmp = 0;
    for(int j=0;j<k;j++){
      tmp+=c[now];
      // cout << tmp << endl;
      now=p[now]-1;
      if(tmp>ans)ans=tmp;
    }
  }

  cout << ans << endl;
  return 0;
}
