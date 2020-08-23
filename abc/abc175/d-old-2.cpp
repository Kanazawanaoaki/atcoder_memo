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

  long long ans = -10000000000;
  for(int i=0;i<n;i++){
    int now = p[i] -1;
    long long l_s = 0;
    long long tmp = 0;
    vector<int> t;
    t.push_back(c[now]);
    l_s += c[now];
    while(now !=i){
      // cout << l_s << " ";
      now = p[now]-1;
      t.push_back(c[now]);
      l_s += c[now];
    }
    // cout << endl;
    // cout << l_s << endl;
    if(l_s>0){
      tmp += l_s * (k/t.size());
      if(tmp>ans) ans = tmp;
      for(int j=0;j<(k%t.size());j++){
	tmp += t[j];
	if(tmp>ans) ans = tmp;
      }
      tmp = l_s * (k/t.size() - 1);
      for(int j=t.size()-1;j>(t.size()-k%t.size()-1);j--){
	tmp -= t[j];
	if(tmp>ans) ans = tmp;
      }
    } else {
      for(int j=0;j<t.size();j++){
	tmp += t[j];
	if(tmp>ans) ans = tmp;
      }
    } 
  }
  
  cout << ans << endl;
  return 0;
}
