#include <bits/stdc++.h>
using namespace std;

int main(){

    string n;
    int k; 
     
    cin >> n >> k;

    int c = n.length();

    
    // long long num = n;
    // int now_c = c;
    // vector<int> m(c);
    // for(int i =0;i<3;i++){
    //     m.at(i)=num/pow(10,now_c-1);
    //     num -= m.at(i)*pow(10,now_c-1);
    //     now_c -= 1;
    // }

    int m1 = n[0] - '0';
    int m2 = n[1] - '0';
    int m3 = n[2] - '0';


    if (k==1) {
        // cout << m.at(0) + (c - 1) * 9 << endl;
        cout << m1 + (c - 1) * 9 << endl;
    } else if (k == 2){
        long  ans =0;
        if(c>1){
            if(c > 2){
                ans += 81*(c-2)*(c-1)/2;
            }
            // ans += (m.at(0)-1)*9*(c-1);
            ans += (m1-1)*9*(c-1);
            ans += 9*(c-2);    
            // ans += m.at(1);
            ans += m2;
        }
        cout << ans << endl;
    } else {
        long ans =0;
        if(c>2){
            if(c>3){
                ans += 729*(c-1)*(c-2)*(c-3)/6;
                ans += 81*(c-2)*(c-3)/2;
            }
            ans += (m1-1)*81*(c-2)*(c-1)/2;
            ans += (m2-1)*9*(c-2);
            ans += 9*(c-3);
            ans += m3;
        }
        cout << ans << endl;
    }
}
