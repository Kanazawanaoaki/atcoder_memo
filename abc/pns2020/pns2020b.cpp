#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long h,w;
    cin >> h >> w;
    
    unsigned long long ans ;
    ans = h*(w/2);
    if(w%2==1){
        ans+=(h+1)/2;
    }
    if(w==1||h==1){
        ans =1;
    }
    cout << ans << endl;
}