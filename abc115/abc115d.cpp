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

//よくわからない

int main(){
    int N,X;
    cin >> N >> X;

    string bp[N];
    bp[0] = "BPPPB";
    for(int i=1;i<N;i++){
        bp[i] = "B";
        bp[i].append(bp[i-1]);
        bp[i].append("P");
        bp[i].append(bp[i-1]);
        bp[i].append("B");
    }
    int l=0;
    cout << bp[0];
    for(int i=0;i<X;i++){
        cout << bp[N][i];
        if(bp[N][i]=='P')l++;
    }
    cout << l << endl;

}