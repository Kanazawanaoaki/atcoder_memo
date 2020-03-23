#include <bits/stdc++.h>
using namespace std;


int main() {


    int n,m;
    cin >> n >> m;

    int ans;
    ans =0;
    if(n>=2){
        ans += n*(n-1)/2;
    }
    if (m>=2){
        ans += m*(m-1)/2;
    }
    cout << ans << endl;

    
}