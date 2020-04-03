#include <bits/stdc++.h>
using namespace std;

int ctoi(char c) {
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return 0;
}

int main() {
    int n ,m ;cin >> n >> m;

    vector<int> s(m);
    vector<int> c(m);

    for(int i=0;i<m;i++){
        cin >> s[i] >> c[i];
    }

    int num = 0;
    int min_n = pow(10,n-1);
    int max_n = pow(10,n) - 1;

    // cout << min_n << " " << max_n << endl;

    std::string str;

    if(n==1){
        bool flag = true;
        for(int j=0;j<m;j++){
            if(c[j]!=0){
                flag = false;
            }
        }
        if(flag){
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i=min_n;i<=max_n;i++){
        str = to_string(i);
        bool flag = true;
        for(int j=0;j<m;j++){
            int tmp = ctoi(str[s[j]-1]);
            if(tmp!=c[j]){
                flag = false;
            }
        }
        if(flag){
            cout << i << endl;
            return 0;
        }
    } 
    
    cout << -1 << endl;
}
