#include <bits/stdc++.h>
using namespace std;

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
    printf("%.10f", ans);
    return 0;
}
