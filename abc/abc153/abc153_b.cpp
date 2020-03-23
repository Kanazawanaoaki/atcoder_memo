#include <bits/stdc++.h>
using namespace std;

int main() {

    int h,n;

    cin >> h >> n;

    vector<int> a(n);

    int sum_a = 0;
    for (int i=0;i<n;i++){
        cin >> a.at(i);
        sum_a += a.at(i);
    }

    if (sum_a >= h) cout << "Yes" << endl;
    else cout << "No" << endl;   
}