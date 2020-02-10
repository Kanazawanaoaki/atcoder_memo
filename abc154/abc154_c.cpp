#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;

    cin >> n;

    vector<int> a(n);

    int tmp;
    int flag = 0;

    for (int i =0;i<n;i++){
        cin >> a.at(i);
    }
  	
 	sort(a.begin(), a.end());
  	a.erase(unique(a.begin(), a.end()), a.end());
  
  	if (a.size() == n) cout << "YES" << endl;
  	else cout << "NO" << endl;
  
}