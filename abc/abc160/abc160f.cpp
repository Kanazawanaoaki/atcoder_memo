#include <bits/stdc++.h>
using namespace std;


long long search(int num, vector<int> pass_list, vector<vector<int>> vec){
  vector<int> f_list1 = vec[num];
  for(int i=0;i<f_list1.size();i++){
    if(f_list1[i] )
  }
}


int main() {
  int n;cin >> n;
  vector<vector<int>>  vec(n+1,vector<int>());

  for(int i=0;i<n-1;i++){
    int a,b;
    cin >> a >> b;
    vec[a].push_back(b);
    vec[b].push_back(a);
  }

  // for(int i=1;i<n+1;i++){
  //   cout << vec[i].size() << endl;
  // }

  for(int i=1;i<=n;i++){
    vector<int> f_list = vec[i];
    long long ans;
    for(int j=0;j<f_list.size();j++){
      vector<int> pass_list{vec[i],f_list[i]};
      ans += search(f_list[j],pass_list,vec);
    }
    cout << ans << endl;
  }
}
