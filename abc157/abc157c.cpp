#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;cin >> n >> m;
    vector<int> s(m);
    vector<int> c(m);
    vector<int> num(n);
    // string s1[n];

    int flag=0;
    for(int i=0;i<m;i++){
        cin >> s[i] >> c[i];
        if(num[s[i]-1]!=0 && (num[s[i]-1]!=c[i])){
            flag = 1;
            break;
        }
        num[s[i]-1]=c[i];
    }
    // string s1;
    // for (int i=0;i<n;i++){
    //     s1.append((char)num[i]);
    // }

    // istringstream ss;
    // ss = istringstream(s1);
    int ans =0;
    // ss >> ans;
    for (int i=0;i<n;i++){
        ans += num[i]*pow(10,n-i-1);
        if((i==0) && (ans==0)){
            flag=1;
        }
    }
    
    if(flag){
        cout << -1 << endl;
    } else {
        cout << ans <<endl;
    }

}
