#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;cin >> n >> m;

    string ss;
    for(int i=0;i<n;i++){
      ss.push_back('a');
    }

    int s;
    int c;
    for(int i=0;i<m;i++){
        cin >> s >> c;
        if(ss[s-1]!='a' && (ss[s-1]!=c+'0')){
            cout << -1 << endl;
            return 0;
        }
        ss[s-1]=c+'0';
    }
    for(int i=0;i<ss.size();i++){
      if(ss[i]=='a'){
        ss[i]='0';
      }
    }
    if(n==1 && ss[0]=='0'){
      cout << 0 << endl;
      return 0;
    }else if (ss[0]=='0'){
      cout << -1 << endl;
      return 0;
    }
    int ans = atoi(ss.c_str());
    cout << ans << endl;
    return 0;
}
