#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<long> a(n);
  cin >> a[0];
  long num = a[0];
  long long ans = 0;
  for (int i=1; i<n ; i++){
    cin >> a[i];
    if(a[i]<num){
      ans += num - a[i];
    } else {
      num = a[i];
    }
  }

  cout << ans << endl;
  
  return 0;
}
