#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n ;

    map<string,int> s;
    for (int i=0;i<n;i++){
        string s1;
        cin >> s1;
        s[s1]++;
    }


    int maxn = s.rbegin()->second;
    
    for (auto x : s){
        if (x.second == maxn){
            cout << x.first << endl;
        }
    }
   
}