#include <bits/stdc++.h>
using namespace std;

bool kaibun(string s){
    int num;
    num = s.size();
    bool ans;
    ans = true;
    for(int i=0;i<num/2;i++){
        if(s[i]!=s[num-i-1]){
            ans = false;
        }
    }
    return ans;
}

int main() {

    string s;
    
    cin >> s;

    int num;
    num = s.size();

    int flag =0;
    if(kaibun(s)==false){
        flag++;
    }
    if(kaibun(s.substr(0,num/2))==false){
        flag++;
    }
    if(kaibun(s.substr(num/2+1))==false){
        flag++;
    }
    
    if(flag==0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
    
}