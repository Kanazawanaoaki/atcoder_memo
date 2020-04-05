#include <bits/stdc++.h>
using namespace std;


int main() {


    long long n,k;
    cin >> n >> k;

    long long n1 = n%k;

    long long n2 = max(n1,k)-min(n1,k);

    cout << min(n1,n2) << endl;

}
