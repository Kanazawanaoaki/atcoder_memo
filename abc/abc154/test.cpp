#include <bits/stdc++.h>
using namespace std;


float calc_sum (int num){
    if (num%2 == 0) {
        return (num+1)*(num/2);
    } else {
        return (num+1)*(num/2)+num/2+1;
    }
}

int main() {

	int n, k; cin >> n >> k;
    vector<double> p(n), q(n + 1, 0);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
        q[i + 1] = q[i] + (p[i] + 1) / 2;
    }
    
    double ans = 0;
    for (int i = 0; i < n - k + 1; i++) {
        ans = max(ans, q[i + k] - q[i]);
    }

    cout << ans << endl;
  
}
