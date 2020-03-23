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
    vector<long double> q(n+1);
    
    double tmp;

    for (int i =0;i<n;i++){
        cin >>  p.at(i);

        q.at(i+1) = q.at(i) + (p.at(i)+1)/2;
    }
  	
    
    long double now_max = 0;
  	long double now = 0;

    for (int i=0;i<(n-k+1);i++){
        now = q.at(i+k)-q.at(i);
        if (now > now_max){
            now_max = now;
        }
    }

    cout << now_max << endl;
  
}