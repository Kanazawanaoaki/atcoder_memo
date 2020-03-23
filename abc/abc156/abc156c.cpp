#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    long sum_2=0;
    long sum_1=0;
    int tmp;
    vector<int> x(n);
    for (int i=0;i<n;i++){
        cin >> tmp;
        x[i]=tmp;
        sum_2 += tmp*tmp;
        sum_1 += tmp;
    }   

    sort(x.begin(), x.end());

    long ans = 10000000000000;
    long l_tmp;
    for(int i=x[0];i<=x[n-1];i++){
        l_tmp = sum_2 - 2*sum_1*i+i*i*n;
        if(l_tmp < ans){
            ans =l_tmp;
        }
    }

    cout << ans << endl;
}