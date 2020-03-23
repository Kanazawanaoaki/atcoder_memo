#include <bits/stdc++.h>
using namespace std;


int main() {

    int a,b;

    cin >> a >> b;
    
    int numa1 = (a * 25) / 2;
    if ((a % 2)!=0) numa1+=1;

    int numb1 = b * 10;

    int numa2 = ((a+1) * 25) / 2;
    if ((a+1)%2==0) numa2 -= 1;

    int numb2 = (b+1) * 10 -1;

    if ((numa1 > numb2) || (numb1 > numa2)){
        cout << "-1" << endl;
    } else {
        cout << max(numa1,numb1) << endl;
    }
    

}