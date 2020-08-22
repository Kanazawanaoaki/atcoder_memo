#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  int ans = 0;
  int cnt = 0;
  for(int i=0;i<s.size();i++){
    if(s[i]=='R') {
      cnt++;
    } else {
      cnt=0;
    }
    if(cnt>ans){
      ans = cnt;
    }
  }

  cout << ans << endl;
  return 0;
}
