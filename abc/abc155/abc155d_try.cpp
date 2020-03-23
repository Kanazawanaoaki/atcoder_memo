#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;

    cin >> n >> k;

    int nn =0;
    vector<long> a(n);
    for (int i=0;i<n;i++){
        cin >> a.at(i);
        if (a[i] < 0){
            nn++;
        }
    }

    sort(a.begin(), a.end());

    int ind1 =0;
    int ind2 =0;

    for (int i =0;i<nn;i**){
        if ((n -nn)*i>=k){
            ind1 =i;
            ind2 = n - (k - (n -nn)*(i-1));
        }
    }


   

    cout << a1[k-1]<< endl;

}