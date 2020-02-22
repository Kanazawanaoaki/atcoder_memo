#include <bits/stdc++.h>
using namespace std;

int main() {

    int n,k;

    cin >> n >> k;

    int i=0;
    int num=1;
    for (i=1;i<n;i++){
        num *= k;
        if(n<num){
            break;
        }
    }

    cout << i << endl;

}