#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,k;

    cin >> n >> k;

    vector<long> a(n);
    vector<long> a1(n*(n-1)/2);
    for (int i=0;i<n;i++){
        cin >> a.at(i);
        if (i>0){
            for(int j=0;j<i;j++){
                a1[i*(i-1)/2+j]=a.at(j)*a.at(i);
            }
        }
    }
    
    sort(a1.begin(), a1.end());
    // for (int i=0 ; i< a1.size();i++){
    //     cout << a1[i] << " "; 
    // }

    // cout << endl;

    cout << a1[k-1]<< endl;

}