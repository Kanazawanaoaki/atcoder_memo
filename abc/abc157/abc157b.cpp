#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<vector<int>> a(3,vector<int>(3));
  for (int i=0;i<3;i++){
    for(int j=0;j<3;j++){
      cin >> a[i][j];
    }
  }
  int n;cin>>n;
  vector<int> tate(3);
  vector<int> yoko(3);
  vector<int> naname(2);
  int ans=0;
  int tmp;
  for(int k=0;k<n;k++){
    cin >> tmp;
    for (int i=0;i<3;i++){
      for(int j=0;j<3;j++){
        if(tmp == a[i][j]){
          tate[i]++;
          yoko[j]++;
          if(i==j){
            naname[0]++;
            if(naname[0]==3)ans++;
          }
          if(i==(2-j)){
            naname[1]++;
            if(naname[1]==3)ans++;
          }
          if(tate[i]==3)ans++;
          if(yoko[j]==3)ans++;
        }
      }
    }
  }
  
  if(ans>0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

}
