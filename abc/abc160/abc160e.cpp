#include <bits/stdc++.h>
using namespace std;

int main() {
  int x,y,a,b,c;
  cin >> x >> y >> a >> b >> c;

  vector<long> p(a);
  vector<long> q(b);
  vector<long> r(c);
  for(int i=0;i<a;i++){
    cin >> p[i];
  }
  for(int i=0;i<b;i++){
    cin >> q[i];
  }
  for(int i=0;i<c;i++){
    cin >> r[i];
  }

  //ソートをする。
  sort(p.begin(),p.end(),greater<int>() );
  sort(q.begin(),q.end(),greater<int>() );
  sort(r.begin(),r.end(),greater<int>() );

  // cout << p[0] << endl;

  long long ans=0;
  int pi = 0;
  int qi = 0;
  int ri = 0;
  bool flag=true;
  while(flag){
    if( ( (p[pi]>=q[qi] && p[pi]>=r[ri]) || (p[pi]>=r[ri] && qi>=y) )&& (pi<x && pi+qi+ri+1<=x+y)){
      ans += p[pi];
      pi++;
      // cout << "p" << ans << endl;
      continue;
    }else if( ( (q[qi]>p[pi] && q[qi]>=r[ri]) || (q[qi]>=r[ri] && pi>=x) ) && (qi <y && pi+qi+ri+1<=x+y)){
      ans += q[qi];
      qi++;
      // cout << "q" << ans << endl;
      continue;
    }else if(pi+qi+ri+1<=x+y){
      ans += r[ri];
      ri++;
      // cout << "r" << ans << endl;
      continue;
    }else{
      // cout << "out" << endl;
      break;
    }
  }

  cout << ans << endl;

}
