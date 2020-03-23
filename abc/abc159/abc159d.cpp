#include <bits/stdc++.h>
using namespace std;


int main() {


    long n;
    cin >> n;

    vector<long> a(n);
    map<long,long> b;
    for(long i=0;i<n;i++){
        cin >> a[i];
        b[a[i]]++;
    }

    long long max_n=0;
    for(auto x : b) {
        if(x.second>=2){
            max_n += x.second * (x.second-1)/2;
        }
    }

    for(long i=0;i<n;i++){
        if(b[a[i]]<2){
            cout << max_n << endl;
        } else{
            cout << max_n - (b[a[i]]-1) << endl;
        }
    }
    
}