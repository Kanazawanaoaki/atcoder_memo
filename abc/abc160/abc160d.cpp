#include <bits/stdc++.h>
using namespace std;

int abs(int num1){
  if(num1 <0){
    return num1*(-1);
  }else{
    return num1;
  }
}

int main() {
  int n,x,y;
  cin >> n >> x >> y;

  vector<int> num2(n-1);
  for(int i=1;i<=n;i++){
    for(int j=i+1;j<=n;j++){
      int ind;
      ind = min(j-i,abs(x-i)+abs(j-y)+1);
      num2[ind-1]++;
      // cout << ind << endl;
    }
  }
  for(int i=0;i<n-1;i++){
    cout << num2[i] << endl;
  }
}
