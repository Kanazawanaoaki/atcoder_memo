#include <bits/stdc++.h>
using namespace std;


int main() {


    int n,k,c;
    cin >> n >> k >> c;
    string s;cin >> s;

    vector<int> a;
    for(int i=0;i<s.size();i++){
      if(s[i]=='o'){
        a.push_back(i+1);
      }
    }

    if(a.size()==k){
      for(int i=0;i<a.size();i++){
        cout << a[i] << endl;
      }
      return 0;
    }

    vector<int> ans;

    vector<int> sa;

    int tmp=a[0];
    sa.push_back(0);
    int cnt=1;
    for(int j=1;j<a.size();j++){
      if(a[j]>tmp+c){
        tmp=a[j];
        cnt++;
        sa.push_back(j);
      }
    }

    for(int i=0;i<sa.size();i++){
      vector<int> b;
      b=a;
      b.erase(b.begin()+sa[i]);
      tmp=b[0];
      cnt=1;
      for(int j=1;j<b.size();j++){
        if(b[j]>tmp+c){
          tmp=b[j];
          cnt++;
        }
      }
      if(cnt<k){
        ans.push_back(a[i]);
      }
    }

    for(int i=0;i<ans.size();i++){
      cout << ans[i] << endl;
    }


}
