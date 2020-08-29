#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  int ans=0;
  if(n%1000==0) ans=0;
  else ans = 1000 - n%1000;
  cout << ans << endl;
  return 0;
}
