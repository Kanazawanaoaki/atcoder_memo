#include <bits/stdc++.h>
using namespace std;

int main() {
  int h,w,m;

  cin >> h >> w >> m;

  vector<int> ha(m);
  vector<int> wa(m);

  vector<int> numh(h);
  vector<int> numw(w);
  vector<vector<int>> g(h, vector<int>(w));

  for (int i=0 ; i<m ; i++){
    cin >> ha[i] >> wa[i];
    numh[ha[i]-1]++;
    numw[wa[i]-1]++;
    g[ha[i]-1][wa[i]-1] = 1;
  }

  // int maxh = max_element(numh.begin(),numh.end()) - numh.begin();
  // int maxw = max_element(numw.begin(),numw.end()) - numw.begin();

  // cout << maxh << endl;
  // cout << maxw << endl;
  // cout << numh[maxh] << endl;
  // cout << numw[maxw] << endl;

  // int num=0;
  // int tmp=0;
  // for (int j=0;j<w;j++){
  //   tmp=0;
  //   for(int i=0;i<h;i++){
  //     if(i!=maxh && g[i][j]==1){
  // 	tmp++;
  //     }
  //   }
  //   if(tmp>num){
  //     num=tmp;
  //   }
  // }
  
  // int ans = numh[maxh] + num;
  // cout << ans << endl;

  int maxh = *max_element(numh.begin(),numh.end());
  int maxw = *max_element(numw.begin(),numw.end());

  int flag = 0;
  vector<int> ht;
  vector<int> wt;
  for(int i=0;i<h;i++){
    if(numh[i]==maxh){
      ht.push_back(i);
    }
  }
  for(int j=0;j<w;j++){
    if(numw[j]==maxw){
      wt.push_back(j);
    }
  }


  // cout << ht.size() << endl;
  
  // for(int i=0;i<ht.size();i++){
  //   cout << ht[i];
  // }
  // cout << endl;

  // for(int i=0;i<wt.size();i++){
  //   cout << wt[i];
  // }
  // cout << endl;
  

  for(int i=0;i<ht.size();i++){
    for(int j=0;j<wt.size();j++){
      if(g[ht[i]][wt[j]]!=1){
	flag=1;
	break;
      }
    }
  }
  
  int ans = maxh + maxw;
  if(flag==0){
    ans--;
    // cout << flag << endl;
  }
  cout << ans << endl;
  

  return 0;
}
