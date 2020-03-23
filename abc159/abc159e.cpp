#include <bits/stdc++.h>
using namespace std;


int detect(vector<vector<int>> s,int k,int num){
    int h=s.size();
    int w=s[0].size();
    int mini=1000000000;
    int num_c=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]==1){
                num_c++;
             }
        }
    }
    if(num_c<=k){
        // cout << 0 << endl;
        return num;
    }
    for(int i=1;i<=(h-1)+(w-1);i++){
        if(i<=(h-1)){
            vector<vector<int>> new_s1(i,vector<int>(w));
            copy(s.begin(), s.begin()+i, new_s1.begin());
            vector<vector<int>> new_s2(h-i,vector<int>(w));
            copy(s.begin()+i+1, s.end(), new_s2.begin());
            mini = min(max(detect(new_s1,k,num+1),detect(new_s2,k,num+1)),mini);
        }else{
            vector<vector<int>> new_s1(h,vector<int>(i-h+1));
            vector<vector<int>> new_s2(h,vector<int>(w-(i-h+1)));
            for(int j=0;j<h;j++){
                copy(s[j].begin(), s[j].begin()+i-h+1, new_s1[j].begin());
                copy(s[j].begin()+i-h+2, s[j].end(), new_s2[j].begin());
            }
            mini = min(max(detect(new_s1,k,num+1),detect(new_s2,k,num+1)),mini);
        }
        
    }
    return mini;

}

int main() {


    long h,w,k;
    cin >> h >> w >> k;

    vector<vector<int>> s(h,vector<int>(w));
    
    for(int i=0;i<h;i++){
        string sn;
        cin >> sn;
        for(int j=0;j<w;j++){
            s[i][j]=sn[j]-'0';
        }

    }


    int num_c=0;
    for(int i=0;i<h;i++){
        for(int j=0;j<w;j++){
            if(s[i][j]==1){
                num_c++;
            }
        }
    }
    
    if(num_c<=k){
        cout << 0 << endl;
        return 0;
    }

    cout << detect(s,k,0) << endl;;

    

}