#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans =0;
  ans = n/2;
  if (n%2==1) ans += 1;
  cout << ans << endl;
}
