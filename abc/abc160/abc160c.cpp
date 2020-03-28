#include <bits/stdc++.h>
using namespace std;

int main() {
  int k,n;
  cin >> k >> n;
  vector<int> a(n);

  int max_n = 0;
  for (int i=0;i<n;i++){
    cin >> a[i];
    if(i>0){
      max_n = max(max_n,a[i]-a[i-1]);
      // cout << max_n << endl;
    }
  }
  max_n = max(max_n,k-a[n-1]+a[0]);
  // cout << max_n << endl;

  cout << k - max_n << endl;

}
