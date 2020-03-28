#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s ;
    if(s[2]!=s[3]){
      cout << "No" << endl;
      return 0;
    }else if(s[4]!=s[5]){
      cout << "No" << endl;
      return 0;
    }
    cout << "Yes" << endl;

}
