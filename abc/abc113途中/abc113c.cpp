#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
using namespace std;

int main(){
    int N,M;
    cin >> N >> M;

    int p[M],y[M],b[M];
    for(int i=0;i<M;i++){
        cin >> p[i] >> y[i];
        b[i] = 0;
    }
    for(int i=0;i<M;i++){
        for(int j=i+1;j<M;j++){
            if(y[i]>y[j])y[j]=y[i];
        }
    }

    int n[N]; //県での番号
    for(int i=1;i<=N;i++){
        n[i-1]=1;
    }

    for(int i=0;i<M;i++){
        b[i] = p[i] * 1000000+n[p[i]];
        n[p[i]]++;
        cout << b[i] << endl;
    }
}