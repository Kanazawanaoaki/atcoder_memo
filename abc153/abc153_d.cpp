#include <bits/stdc++.h>
using namespace std;


long func(long num){
    if (num==1){
        return 1;
    } else {
        return 2*func(num/2)+1;
    }
}


int main() {

    long h;

    cin >> h ;

    cout << func(h) << endl;

}