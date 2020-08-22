#include <bits/stdc++.h>
using namespace std;

int main() {
  int n,x,t;

  cin >> n >> x >> t;

  int num =0;
  int ans =0;

  while (num<n){
    num+= x;
    ans+=t;
  }

  cout << ans << endl;

  return 0;
}
