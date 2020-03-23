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
    int N,X;
    int res =1;
    int sum =0;

    cin  >> N >> X;

    int L[N];

    for(int i=0;i<N;i++){
        cin >> L[i];
    }

    for(int i=0;i<N;i++){
        sum += L[i];
        if(sum<=X)res++;
    }

    cout << res << endl;

    return 0;
}