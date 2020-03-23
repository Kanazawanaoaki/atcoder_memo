#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;

    cin >> n;

    int ans=0;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        if ((tmp % 2 ==0 )&& !((tmp %3 ==0) || (tmp %5 == 0))){
            ans += 1;
        }
    }

    if (ans >0){
        cout << "DENIED" << endl;
    } else {
        cout << "APPROVED" << endl;
    }


}