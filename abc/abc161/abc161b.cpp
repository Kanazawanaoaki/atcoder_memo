#include <bits/stdc++.h>
using namespace std;


int main() {


    int m,n;
    cin >> n >> m;
    int sum=0;

    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>> a[i];
      sum += a[i];
    }

    std::sort(a.begin(), a.end(), std::greater<int>() );

    // cout << a[m-1] << endl;
    if(4*m*a[m-1]<sum){
      cout << "No" << endl;
    }else{
      cout << "Yes" << endl;
    }

}
