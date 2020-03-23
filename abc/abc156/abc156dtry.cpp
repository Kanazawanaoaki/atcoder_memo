#include <bits/stdc++.h>
using namespace std;


const long MOD = 1000000007;

long long int power(long long int x, long long int n, long long int M) {
	long long int ret = 1;
	long long int by = x;
	while (n) {
		if (n & 1) {
			ret *= by;
			ret %= M;
		}
		by *= by;
		by %= M;
		n >>= 1;
	}
	return ret;
}

long long ruijou_2(int x){
    if(x==0) return 1;
    long long ans = ruijou_2(x/2);
    ans = (ans*ans);
    if(x%2==1) ans = (2*ans);
    return ans%MOD;
}

int main() {


    int n,a,b;

    cin >> n >> a >>b;

    if (n<=2){
        cout << 0 << endl;
        return 0;
    }

    int i=1;
    long long ans = ruijou_2(n)-1;
    //cout << ans << endl;
    long long num=n;
    for (i=1;i<=b;i++){
        if(i>1){
            num = (num * (n-i+1)) % MOD;
            num = (num*power(i, MOD - 2, MOD))%MOD;
        }
        if(i==a || i==b){
            ans = (MOD + ans - num)%MOD;
            //cout << ans << endl;
        }
    }

    cout << ans << endl;

}