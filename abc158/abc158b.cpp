#include <bits/stdc++.h>
using namespace std;


int main() {

    long long  n,a,b;

    cin >> n >> a >> b;
    
    long long num1 = a + b;

    if (n>a+b){
        cout << min(n%num1,a)+(n/num1)*a << endl;
    } else{
        cout << min(n,a) << endl;
    }
    
}