#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;

    cin >> s;

    int num = s.length();

    string ans="x";

    for (int i=0 ;i<(num-1);i++){
        ans += "x";
    }
    
    cout << ans << endl;
}