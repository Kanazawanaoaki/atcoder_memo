#include <bits/stdc++.h>
using namespace std;


float calc_sum (int num){
    if (num%2 == 0) {
        return (num+1)*(num/2);
    } else {
        return (num+1)*(num/2)+num/2+1;
    }
}

int main() {

    int n,k;

    cin >> n >> k;

    vector<long double> p(n);

    int tmp;

    for (int i =0;i<n;i++){
        cin >> tmp;

        long double s = calc_sum(tmp);

        p.at(i) = s/tmp;
    }
  	
    
    long double now_max = 0;
    long double now = 0;
    int index =0;

    for (int i=0;i<(n-k);i++){
        now += p.at(i+k);
        now -= p.at(i);
        if (now > now_max){
            now_max = now;
            index = i+1;
        }
    }

    long double ans = 0;
    for (int j=0;j<k;j++){
        ans += p.at(index+j);
    }

    cout <<setprecision(10)<< ans << endl;
  
}