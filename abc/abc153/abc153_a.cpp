#include <bits/stdc++.h>
using namespace std;

int main() {

    int h,a;

    cin >> h >> a;

    int ans = h/a;
    if(h%a != 0) ans += 1;
    cout << ans << endl;
}