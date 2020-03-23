#include <bits/stdc++.h>
using namespace std;


int main() {

    string s;
    
    cin >> s;

    int q; cin >>q;
    
    int tmp;
    string tm;

    int r_flag=0;
    for (int i=0;i<q;i++){
        cin >> tmp;

        if(tmp==1){
            r_flag +=1;
        } else {
            cin >> tmp;
            cin >> tm;
            if((tmp ==1 && r_flag%2==0) || (tmp == 2 && r_flag%2!=0)){
                s.insert(0,tm);
            }else{
                s.append(tm);
            }
        }
    }

    if(r_flag%2!=0){
        reverse(s.begin(), s.end());
    }

    cout << s << endl;
    
}