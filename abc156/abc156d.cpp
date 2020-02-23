#include <bits/stdc++.h>
using namespace std;

const int MAX = 510000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];

// テーブルを作る前処理
void COMinit() {
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for (int i = 2; i < MAX; i++){
        fac[i] = fac[i - 1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD / i) % MOD;
        finv[i] = finv[i - 1] * inv[i] % MOD;
    }
}

// 二項係数計算
long long COM(int n, int k){
    if (n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}


int main() {

    int n,a,b;

    cin >> n >> a >>b;

    if (n<=2){
        cout << 0 << endl;
        return 0;
    }

    // 前処理
    COMinit();

    int i=1;
    long long ans =0;
    for (i=1;i<=n;i++){
        if(i!=a && i!=b){
            ans = (ans +COM(n, i))%MOD;
        }
    }
    // while(i<=n){
    //     if(i!=a && i!=b){
    //         ans = (ans +COM(n, i))%MOD;
    //     }
    //     i++;
    // }

    cout << ans << endl;
}