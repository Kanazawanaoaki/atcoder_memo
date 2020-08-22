#include <bits/stdc++.h>
using namespace std;

int main() {
  string n;

  cin >> n;

  int num =0;

  for (int i=0; i<n.size() ; i++){
    num+= (n[i] - '0');
  }

  // cout << num << endl;

  if(num%9 == 0){
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}
