#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;

    cin >> n >> k;

    if (k > n) {
        cout << 0 << endl;
        return 0;
    }
    vector<long> h(n);

    long sum_a = 0;
    for (int i=0;i<n;i++){
        cin >> h.at(i);
        sum_a += h.at(i);
    }

    sort(h.begin(),h.end());

    long num_a = 0;
    for (int i=0;i<k;i++){
        num_a += h.at(n-i-1);
    }

    cout << sum_a - num_a << endl;

    return 0;
}