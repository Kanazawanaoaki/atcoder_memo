#include <bits/stdc++.h>
using namespace std;

const int INF =  1001001001;

int main() {

    int h,n;
    cin >> h >> n;

    vector<int> a(n);
    vector<int> b(n);
    for (int i =0 ;i<n;i++){
        cin >> a.at(i) >> b.at(i);
    }

    int dp[n+1][h+2];
    for (int i=0;i<n+1;i++){
        for (int j=0;j<h+1;j++){
            dp[i][j]=INF;
        }
        dp[i][0]=0;
    }
    for (int i=0;i<n;i++){
        for (int j=0;j<h+1;j++){
            if(j >= a.at(i)) {
                // cout << j << " ";
                dp[i+1][j]=min(dp[i+1][j-a.at(i)]+b.at(i),dp[i][j]);
                // if (dp[i][j]==0 && (j-a.at(i)==0 || dp[i+1][j-a.at(i)]!=0)) dp[i+1][j]=dp[i+1][j-a.at(i)]+b.at(i);
                // else if (dp[i+1][j-a.at(i)] != 0 && j!=h)dp[i+1][j] = min(dp[i+1][j-a.at(i)]+b.at(i),dp[i][j]);
                // cout << dp[i+1][j] << endl;
            }
            else dp[i+1][j] = dp[i][j];
            
        }
        if (dp[i+1][h]==INF){
            for (int j=0;j<h;j++){
                if(dp[i+1][h-j]!=INF){
                    dp[i+1][h]=min(dp[i+1][h-j]+b.at(i),dp[i][h]);
                    //dp[i+1][h]=dp[i+1][h-j]+b.at(i);
                    if(i==0)dp[i+1][h]=dp[i+1][h-j]+b.at(i);
                    break;
                }
            }
        }
    }

    // for (int i=0;i<n+1;i++){
    //     cout << dp[i][h] << endl;
    // }
    
    cout << dp[n][h] << endl;

}