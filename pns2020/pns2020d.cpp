#include <bits/stdc++.h>
using namespace std;


void pus(int i,int n, string s){
    if (i==(n-1)){
        cout << s << endl;
    }
}

int main() {
    
    int n;
    cin >> n ;

  
    vector<string> ss{"a","b","c","d","e","f","g","h","i","j"};
    vector<string> a;
    vector<string> b;
    a.push_back("a");
    if(n==1){
        cout << a[0] << endl;
        return 0;
    }

    for(int i=1;i<n;i++){
        b.erase(b.begin(), b.end());
        for(int j=0;j<a.size();j++){
            for(int k=0;k<10;k++){
                b.push_back(a[j]+ss[k]);
                if(a[j].find(ss[k]) == std::string::npos){
                    // cout << ss[k] << endl;
                    break;
                }
            }
        }
        a = b;
    }

    
    for(int i=0;i<b.size();i++){
        cout << b[i] << endl;
    }
}